######################################################
## Metode Bagi Dua
######################################################
rm(list=ls(all=TRUE))
## Kita definisikan fungsi f(x)
x1 = seq(0,1,by=0.001)
f1 = x1^0.5 - cos(x1)
plot(x1,f1,xlab="x",ylab="f(x)",type="l",ylim=c(-1,1)) 
abline(h=0)# absolute line horizontal pada sumbu y = 0

x2 = seq(0,1,by=0.001)
f2 = x2 - 2^(-x2)
plot(x2,f2,xlab="x",ylab="f2",type="l")
abline(h = 0)

rm(list=ls(all=TRUE))
f = function(x){ 
	x^0.5 - cos(x)
    ##x - 2^(-x)
}

## Menentukan nilai-nilai awal
a = 0
b = 1
#########tol = .Machine$double.eps# menentukan tolerance
tol = .Machine$double.eps^0.25 # menentukan tolerance
fa = f(a)
fb = f(b)
if (fa*fb > 0) stop("f tidak memiliki tanda yang berbeda pada titik ujung!")
### N = ((log10(b-a)-log10(tol))/log10(2)) + 1 # menentukan banyak iterasi N >= (log(b-a) - log(tol))/log(2)

## Iterasi
i = 1
while (i < 1000){
    p = a + 0.5*(b-a)
    fp = f(p)
    if (fp == 0 || (b-a)/2 < tol){
        #return(p)
        stop("Iterasi ke-",i, "akar dari persamaan:",p)
    }
    i = i +1 # kenaikan (increment)
    if (fa*fp > 0){
       a = p
       fa = fp
    } else {
       b = p      
    }
    #return(p)
    cat("Iterasi ke-",i, "nilai p:",p,"\n")  
}

(akar = uniroot(function(x){x^0.5 - cos(x)},lower=0,upper=1))

######################################################
## Metode Titik Tetap
######################################################
rm(list=ls(all=TRUE))
## Kita definisikan fungsi f(x)
x1 = seq(-3,3,by=0.001)
f1 = x1^2 - 2
plot(x1,f1,xlab="x",ylab="f(x)",type="l",add=T) 
x2 = x1
f2 = x2
lines(x2,f2,xlab="x",ylab="f(x)",type="l",col="blue",add=T)
abline(v=0)# absolute line horizontal pada sumbu y = 0
abline(h=0)

rm(list=ls(all=TRUE))

x1 = seq(-3,3,by=0.001)
f1 = x1^3 + 4*x1^2 - 10
plot(x1,f1,xlab="x",ylab="f(x)",type="l",add=T) 
x2 = x1
f2 = 0.5*(10 - x2^3)^0.5
lines(x2,f2,xlab="x",ylab="f(x)",type="l",col="blue",add=T)
abline(v=0)# absolute line horizontal pada sumbu y = 0
abline(h=0)


# mendefinisikan fungsi g
g = function(x){ 
	0.5*(10-x^3)^0.5
}

# Nilai awal 
p0 = 1.5
tol = .Machine$double.eps^0.25
## Iterasi
i = 1
while (i < 1000){
    p = g(p0)
    if (abs(p-p0)< tol){
        #return(p)
        stop("Iterasi ke-",i, "akar dari persamaan:",p)
    }
    i = i + 1 # kenaikan (increment)
    p0 = p
    cat("Iterasi ke-",i, "nilai p:",p,"\n")  
}

(akar = uniroot(function(x){x^3 + 4*x^2 - 10},lower=1,upper=2))


######################################################
## Metode Newton
######################################################
rm(list=ls(all=TRUE))

####x1 = seq(0,pi/2,xlab="x",ylab="f(x)",by=0.01)
x1 = seq(0,2*pi,by=0.01)
f1 = cos(x1)-x1
plot(x1,f1,type="l")
abline(h=0)

x2 = seq(0,pi/2,by=0.01)
f2 = x2
par(new=T)
plot(x2,f2,xlab="x",ylab="f(x)",type="l",add=T)

## fungsi f(x) halaman 69
f.1 = function(x) {
    cos(x)-x
}
## fungsi f'(x)
f.2 = function(x){
    -sin(x)-1
}
p0 = pi/4
i = 1
tol = .Machine$double.eps^0.25
while(i < 1000){
   p = p0 - f.1(p0)/f.2(p0)
   if(abs(p-p0) < tol){
      stop("Iterasi ke-",i, "akar dari persamaan:",p)
   }
   i = i + 1
   p0 = p
   cat("Iterasi ke-",i, "nilai p:",p,"\n") 
}

(akar = uniroot(function(x){cos(x)-x},lower=0,upper=pi/2))