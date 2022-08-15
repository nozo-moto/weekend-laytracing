#ifndef MATERIAL_H
#define MATERIAL_H

#include "hittable.h"
#include "ray.h"

class material {
public:
    virtual ~material() { }
    virtual bool scatter(const ray& r_in, const hit_record& rec,
        color& attenuation, ray& scattered) const = 0;
};

double schlick(double cosine, double ref_idx) {
  auto r0 = (1-ref_idx) / (1+ref_idx);
  r0 = r0*r0;
  return r0 + (1-r0)*pow((1 - cosine),5);
}
#endif
