#pragma once
#include "types.h"

uint16 Poly_Divide(uint16 a, uint16 b);
void Poly_RunFrame(void);
void Polyhedral_SetShapePointer(void);
void Polyhedral_SetRotationMatrix(void);
void Polyhedral_OperateRotation(void);
void Polyhedral_RotatePoint(void);
void Polyhedral_ProjectPoint(void);
void Polyhedral_DrawPolyhedron(void);
void Polyhedral_SetForegroundColor(void);
int16 Polyhedral_CalculateCrossProduct(void);
void Polyhedral_SetColorMask(int c);
void Polyhedral_EmptyBitMapBuffer(void);
void Polyhedral_DrawFace(void);
void Polyhedral_FillLine(void);
bool Polyhedral_SetLeft(void);
bool Polyhedral_SetRight(void);
