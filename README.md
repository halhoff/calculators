Two simple calculators I made when I started coding. 

First one is takes an input n and returns 1/n. It uses Newton's method to get a good approximation.

- Input number, n.
- Outputs 1/n. If it worked.

Second one is a trig calculator. It uses a fourth-degree taylor polynomial for cosine that can approximate values from -pi/2 to pi/2.
If the function is sine, it's shifted so it becomes cosine. If it's tangent, it does sin/cos. 
If its cosine, it doesn't change anything since the approximation is based on cosine.
Angle in radians is shifted so its in -pi/2 to pi/2 domain.

- Input function: either sin, cos, or tan.
- Input angle.
- Outputs result. If it worked.
