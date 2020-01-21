/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Superviseur.h
 * Author: snir2g2
 *
 * Created on 21 janvier 2020, 14:31
 */

#ifndef SUPERVISEUR_H
#define SUPERVISEUR_H

class Superviseur {
public:
    Superviseur();
    ~Superviseur();
    ClientMeteo* getLeClientMeteo();
    void setVuePrincipale(VuePrincipale* uneVuePrincipale);
private:

    VuePrincipale* laVue;
    ClientMeteo* leClientMeteo;
};

#endif /* SUPERVISEUR_H */

