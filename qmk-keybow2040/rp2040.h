#pragma once
#include "quantum.h"
 #define LAYOUT(\
    k0A, k0B, k0C, k0D, \
    k1A, k1B, k1C, k1D, \
    k2A, k2B, k2C, k2D, \
    k3A, k3B, k3C, k3D )\
{\
    {k0A, k0B, k0C, k0D },\
    {k1A, k1B, k1C, k1D },\
    {k2A, k2B, k2C, k2D },\
    {k3A, k3B, k3C, k3D } \
}