//
//  transforms.h
//  C-Ray
//
//  Created by Valtteri Koskivuori on 07/02/2017.
//  Copyright © 2017 Valtteri Koskivuori. All rights reserved.
//

#pragma once

enum transformType {
	transformTypeXRotate,
	transformTypeYRotate,
	transformTypeZRotate,
	transformTypeTranslate,
	transformTypeScale,
	transformTypeMultiplication,
	transformTypeNone
};

//Reference: http://tinyurl.com/ho6h6mr
struct matrixTransform {
	enum transformType type;
	double a, b, c, d;
	double e, f, g, h;
	double i, j, k, l;
	double m, n, o, p;
};

struct material;

//Transform types
struct matrixTransform newTransformScale(double x, double y, double z);
struct matrixTransform newTransformTranslate(double x, double y, double z);
struct matrixTransform newTransformRotateX(float degrees);
struct matrixTransform newTransformRotateY(float degrees);
struct matrixTransform newTransformRotateZ(float degrees);
struct matrixTransform emptyTransform();

void transformVector(struct vector *vec, struct matrixTransform *tf); //Expose for renderer
