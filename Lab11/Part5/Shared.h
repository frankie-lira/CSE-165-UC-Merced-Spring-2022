//
//  Shared.h
//  Lab11
//
//  Created by Francisco Lira on 4/19/22.
//

#ifndef Shared_h
#define Shared_h

class Shared {
    private :
    unsigned int _ref;
    
    protected :
    /*! Constructor initializes the reference counter as 0 */
    Shared () {
        _ref=0;
    }
    
    /*! Destructor in derived classes should be declared as
     protected in order to force users to call always unref()
     instead of delete */
    virtual ~Shared () {
    
    }
    
    public :
    
    /*! Returns the current reference counter value. */
    unsigned getref () const {
        return _ref;
    }
    
    /*! Increments the reference counter. */
    void ref () {
        _ref++;
    }
    
    /*! Decrements the reference counter (if >0), and if the
     counter becomes 0, the object is automatically self deleted. */
    void unref() {
        if(_ref>0){
            _ref--;
        }
        if(_ref==0){
            delete this;
        }
    }
};

#endif /* Shared_h */
