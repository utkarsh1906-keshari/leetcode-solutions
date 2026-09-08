class Solution {
public:
    // int Helper(int n , vector<int>&dat){
    //      if(n==-1){
    //       return 0;
    //      }
    //      if(n==0){
    //       return 1;
    //      }
    
    //      if(dat[n]==0){
    //       dat[n]= Helper(n-2,dat)+ Helper(n-1,dat);  
            
    //      }
    //      return dat[n];
    
    // }

    // int climbStairs(int n) {
    
    // vector<int>dat(n+1);
    // return Helper(n,dat);
        
        
        
    // }
    int Helper(int i , int n , vector<int>&dat){
      
        if(i==n){
            return 1;
        }
        if(i>n){
            return 0;
        }

         if(dat[i]==0){
          dat[i]= Helper(i+2,n ,dat)+ Helper(i+1,n ,dat);  
            
         }
        return dat[i] ; 
    }
    
    int climbStairs(int n){
        vector<int>dat(n+1,0);
    return Helper(0,n,dat);
        
    }

};