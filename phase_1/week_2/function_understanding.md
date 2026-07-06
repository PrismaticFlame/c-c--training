When writing a function, the parameters are COPIES of the actual passed parameter, not the parameter itself.

I believe this is true in Python as well

"But no fancy-schmancy name will distract you from the fact that *EVERYTHING* you pass to a function *WITHOUT EXCEPTION* is copied into its corresponding parameter, and the function operates on that local copy, *NO MATTER WHAT*. Remember that, even when we’re talking about this so-called passing by reference." - Chapter 4.1, beej