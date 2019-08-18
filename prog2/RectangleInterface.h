#ifndef RECTANGLE_INTERFACE_
#define RECTANGLE_INTERFACE_

//  Listing 2
/** @file RectangleInterface.h */

class RectangleInterface
{
public:
	/** Updates the length and width of this Rectangle
	 @param  newLength the new length for this Rectangle
	 @param  newWidth the new width for this Rectangle
	 @pre    newLength must be larger than zero
	 @pre    newWidth must be larger than zero
	 @post   If newLength and newWidth are valid, the length
	         and width of this object is set to newLength and newWidth, respectively
			 Otherwise, the Rectangle is not updated 
	 @return  True if this object is updated,
	          and false otherwise. */ 
	virtual bool set(double newLength, double newWidth) = 0;
	
	/** Gets the length  of this Rectangle
	 @return The length of this Rectangle. */
	virtual double getLength() const = 0;
		
	/** Gets the width  of this Rectangle
	 @return The width of this Rectangle. */
	virtual double getWidth() const = 0;
	
	/** Gets the area  of this Rectangle
	 @return The area of this Rectangle. */
	virtual double getArea() const = 0;

	/** Destroys this Rectangle and frees its assigned memory. */
	virtual ~RectangleInterface() {}
};
#endif
