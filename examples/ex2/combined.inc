// created with MolVista by Dr. Tobias Schulz
// IRC Trajectory as Array of Molecules
// #include "combined.inc" into povray
// ---- use "object{combined[i]}" in code
//declare molecule object array
#declare combined = array[161];
//
// ---- Atom and Bond Section
//transparency
#declare trans_bd = 0;
#declare trans_atom = 0;
//atom radius
#declare atom_rad_h = 0.24;
#declare atom_rad_2 = 0.35;
#declare atom_rad_3 = 0.42;
#declare atom_rad_def = 0.5;
#declare bond_rad = 0.08;
// predefined finishes:
#declare Fin_Glassy   = finish { phong 0.9 specular 0.8 reflection 0.1 roughness 0.001 }
#declare Fin_Metallic = finish { phong 0.5 metallic 0.7 brilliance 2.0 diffuse 0.3 }
#declare Fin_Matte    = finish { phong 0.0 ambient 0.1 diffuse 0.8 }
// Define Bond Finishes
#declare Fin_Bd_Std = finish { phong 0.2 ambient 0.2 }
// Select bond Finish
#declare BdFinish = Fin_Bd_Std;
// Definde Atom finishes
#declare Fin_Atom_Std = finish { phong 0.6 specular 0.4 ambient 0.2 }
// select Atom Finish
#declare AtomFinish = Fin_Atom_Std;
///////////////////////////////////
        //Begin of Section 1  
#declare AtomsGroup_1 = union {
  sphere { <0.0002, -0.0171, -0.0079>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3453, 0.0077, -0.0125>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1825, 0.0612, 1.2032>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.8020, 3.0467, 2.0026>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8710, 0.0496, -0.9745>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5745, -0.0123, -0.9378>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5663, -0.0295, 0.9296>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6809, -0.2916, 2.1162>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.1767, -0.3973, 1.0952>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.4236, 1.1729, 1.4135>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_1 = union {
  cylinder { <0.0002, -0.0171, -0.0079>, <1.3453, 0.0077, -0.0125>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0002, -0.0171, -0.0079>, <-0.5745, -0.0123, -0.9378>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0002, -0.0171, -0.0079>, <-0.5663, -0.0295, 0.9296>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3453, 0.0077, -0.0125>, <2.1825, 0.0612, 1.2032>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3453, 0.0077, -0.0125>, <1.8710, 0.0496, -0.9745>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1825, 0.0612, 1.2032>, <1.6809, -0.2916, 2.1162>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1825, 0.0612, 1.2032>, <3.1767, -0.3973, 1.0952>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1825, 0.0612, 1.2032>, <2.4236, 1.1729, 1.4135>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.8020, 3.0467, 2.0026>, <2.4236, 1.1729, 1.4135>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[1] = union {
    object {AtomsGroup_1}
    object {BondsGroup_1}
}
// End of Section 1
        //Begin of Section 2  
#declare AtomsGroup_2 = union {
  sphere { <0.0008, -0.0162, -0.0074>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3456, 0.0070, -0.0123>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1827, 0.0605, 1.2034>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.7992, 3.0401, 1.9995>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8716, 0.0493, -0.9741>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5741, -0.0097, -0.9374>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5658, -0.0286, 0.9301>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6818, -0.2914, 2.1170>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.1784, -0.3946, 1.0959>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.4213, 1.1740, 1.4129>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_2 = union {
  cylinder { <0.0008, -0.0162, -0.0074>, <1.3456, 0.0070, -0.0123>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0008, -0.0162, -0.0074>, <-0.5741, -0.0097, -0.9374>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0008, -0.0162, -0.0074>, <-0.5658, -0.0286, 0.9301>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3456, 0.0070, -0.0123>, <2.1827, 0.0605, 1.2034>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3456, 0.0070, -0.0123>, <1.8716, 0.0493, -0.9741>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1827, 0.0605, 1.2034>, <1.6818, -0.2914, 2.1170>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1827, 0.0605, 1.2034>, <3.1784, -0.3946, 1.0959>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1827, 0.0605, 1.2034>, <2.4213, 1.1740, 1.4129>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.7992, 3.0401, 1.9995>, <2.4213, 1.1740, 1.4129>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[2] = union {
    object {AtomsGroup_2}
    object {BondsGroup_2}
}
// End of Section 2
        //Begin of Section 3  
#declare AtomsGroup_3 = union {
  sphere { <0.0011, -0.0153, -0.0071>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3463, 0.0063, -0.0120>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1829, 0.0598, 1.2035>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.7963, 3.0333, 1.9965>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8723, 0.0490, -0.9736>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5738, -0.0072, -0.9369>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5653, -0.0277, 0.9306>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6826, -0.2910, 2.1178>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.1800, -0.3919, 1.0965>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.4192, 1.1750, 1.4122>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_3 = union {
  cylinder { <0.0011, -0.0153, -0.0071>, <1.3463, 0.0063, -0.0120>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0011, -0.0153, -0.0071>, <-0.5738, -0.0072, -0.9369>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0011, -0.0153, -0.0071>, <-0.5653, -0.0277, 0.9306>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3463, 0.0063, -0.0120>, <2.1829, 0.0598, 1.2035>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3463, 0.0063, -0.0120>, <1.8723, 0.0490, -0.9736>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1829, 0.0598, 1.2035>, <1.6826, -0.2910, 2.1178>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1829, 0.0598, 1.2035>, <3.1800, -0.3919, 1.0965>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1829, 0.0598, 1.2035>, <2.4192, 1.1750, 1.4122>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.7963, 3.0333, 1.9965>, <2.4192, 1.1750, 1.4122>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[3] = union {
    object {AtomsGroup_3}
    object {BondsGroup_3}
}
// End of Section 3
        //Begin of Section 4  
#declare AtomsGroup_4 = union {
  sphere { <0.0008, -0.0146, -0.0066>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3473, 0.0058, -0.0116>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1827, 0.0593, 1.2034>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.7939, 3.0273, 1.9939>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8728, 0.0489, -0.9732>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5734, -0.0051, -0.9365>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5648, -0.0271, 0.9308>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6833, -0.2905, 2.1186>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.1815, -0.3896, 1.0971>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.4175, 1.1759, 1.4117>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_4 = union {
  cylinder { <0.0008, -0.0146, -0.0066>, <1.3473, 0.0058, -0.0116>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0008, -0.0146, -0.0066>, <-0.5734, -0.0051, -0.9365>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0008, -0.0146, -0.0066>, <-0.5648, -0.0271, 0.9308>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3473, 0.0058, -0.0116>, <2.1827, 0.0593, 1.2034>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3473, 0.0058, -0.0116>, <1.8728, 0.0489, -0.9732>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1827, 0.0593, 1.2034>, <1.6833, -0.2905, 2.1186>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1827, 0.0593, 1.2034>, <3.1815, -0.3896, 1.0971>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1827, 0.0593, 1.2034>, <2.4175, 1.1759, 1.4117>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.7939, 3.0273, 1.9939>, <2.4175, 1.1759, 1.4117>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[4] = union {
    object {AtomsGroup_4}
    object {BondsGroup_4}
}
// End of Section 4
        //Begin of Section 5  
#declare AtomsGroup_5 = union {
  sphere { <0.0012, -0.0142, -0.0062>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3474, 0.0054, -0.0110>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1824, 0.0591, 1.2032>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.7924, 3.0234, 1.9923>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8732, 0.0488, -0.9732>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5733, -0.0037, -0.9363>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5646, -0.0267, 0.9310>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6837, -0.2902, 2.1192>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.1827, -0.3882, 1.0975>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.4164, 1.1765, 1.4113>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_5 = union {
  cylinder { <0.0012, -0.0142, -0.0062>, <1.3474, 0.0054, -0.0110>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0012, -0.0142, -0.0062>, <-0.5733, -0.0037, -0.9363>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0012, -0.0142, -0.0062>, <-0.5646, -0.0267, 0.9310>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3474, 0.0054, -0.0110>, <2.1824, 0.0591, 1.2032>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3474, 0.0054, -0.0110>, <1.8732, 0.0488, -0.9732>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1824, 0.0591, 1.2032>, <1.6837, -0.2902, 2.1192>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1824, 0.0591, 1.2032>, <3.1827, -0.3882, 1.0975>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1824, 0.0591, 1.2032>, <2.4164, 1.1765, 1.4113>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.7924, 3.0234, 1.9923>, <2.4164, 1.1765, 1.4113>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[5] = union {
    object {AtomsGroup_5}
    object {BondsGroup_5}
}
// End of Section 5
        //Begin of Section 6  
#declare AtomsGroup_6 = union {
  sphere { <0.0020, -0.0127, -0.0058>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3480, 0.0046, -0.0112>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1833, 0.0575, 1.2038>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.7873, 3.0093, 1.9866>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8742, 0.0487, -0.9720>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5725, 0.0004, -0.9355>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5640, -0.0256, 0.9320>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6849, -0.2882, 2.1207>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.1852, -0.3825, 1.0987>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.4132, 1.1789, 1.4103>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_6 = union {
  cylinder { <0.0020, -0.0127, -0.0058>, <1.3480, 0.0046, -0.0112>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0020, -0.0127, -0.0058>, <-0.5725, 0.0004, -0.9355>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0020, -0.0127, -0.0058>, <-0.5640, -0.0256, 0.9320>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3480, 0.0046, -0.0112>, <2.1833, 0.0575, 1.2038>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3480, 0.0046, -0.0112>, <1.8742, 0.0487, -0.9720>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1833, 0.0575, 1.2038>, <1.6849, -0.2882, 2.1207>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1833, 0.0575, 1.2038>, <3.1852, -0.3825, 1.0987>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1833, 0.0575, 1.2038>, <2.4132, 1.1789, 1.4103>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.7873, 3.0093, 1.9866>, <2.4132, 1.1789, 1.4103>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[6] = union {
    object {AtomsGroup_6}
    object {BondsGroup_6}
}
// End of Section 6
        //Begin of Section 7  
#declare AtomsGroup_7 = union {
  sphere { <0.0026, -0.0112, -0.0049>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3488, 0.0039, -0.0100>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1828, 0.0567, 1.2033>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.7824, 2.9943, 1.9808>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8755, 0.0487, -0.9714>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5719, 0.0043, -0.9348>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5635, -0.0247, 0.9326>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6859, -0.2858, 2.1225>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.1884, -0.3769, 1.0997>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.4105, 1.1813, 1.4097>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_7 = union {
  cylinder { <0.0026, -0.0112, -0.0049>, <1.3488, 0.0039, -0.0100>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0026, -0.0112, -0.0049>, <-0.5719, 0.0043, -0.9348>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0026, -0.0112, -0.0049>, <-0.5635, -0.0247, 0.9326>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3488, 0.0039, -0.0100>, <2.1828, 0.0567, 1.2033>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3488, 0.0039, -0.0100>, <1.8755, 0.0487, -0.9714>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1828, 0.0567, 1.2033>, <1.6859, -0.2858, 2.1225>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1828, 0.0567, 1.2033>, <3.1884, -0.3769, 1.0997>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1828, 0.0567, 1.2033>, <2.4105, 1.1813, 1.4097>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.7824, 2.9943, 1.9808>, <2.4105, 1.1813, 1.4097>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[7] = union {
    object {AtomsGroup_7}
    object {BondsGroup_7}
}
// End of Section 7
        //Begin of Section 8  
#declare AtomsGroup_8 = union {
  sphere { <0.0032, -0.0099, -0.0042>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3495, 0.0035, -0.0100>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1832, 0.0554, 1.2036>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.7776, 2.9792, 1.9752>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8765, 0.0486, -0.9703>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5713, 0.0077, -0.9341>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5632, -0.0241, 0.9332>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6866, -0.2829, 2.1240>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.1909, -0.3711, 1.1006>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.4086, 1.1840, 1.4095>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_8 = union {
  cylinder { <0.0032, -0.0099, -0.0042>, <1.3495, 0.0035, -0.0100>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0032, -0.0099, -0.0042>, <-0.5713, 0.0077, -0.9341>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0032, -0.0099, -0.0042>, <-0.5632, -0.0241, 0.9332>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3495, 0.0035, -0.0100>, <2.1832, 0.0554, 1.2036>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3495, 0.0035, -0.0100>, <1.8765, 0.0486, -0.9703>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1832, 0.0554, 1.2036>, <1.6866, -0.2829, 2.1240>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1832, 0.0554, 1.2036>, <3.1909, -0.3711, 1.1006>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1832, 0.0554, 1.2036>, <2.4086, 1.1840, 1.4095>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.7776, 2.9792, 1.9752>, <2.4086, 1.1840, 1.4095>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[8] = union {
    object {AtomsGroup_8}
    object {BondsGroup_8}
}
// End of Section 8
        //Begin of Section 9  
#declare AtomsGroup_9 = union {
  sphere { <0.0034, -0.0087, -0.0037>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3505, 0.0033, -0.0087>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1827, 0.0547, 1.2029>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.7730, 2.9639, 1.9697>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8776, 0.0486, -0.9697>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5707, 0.0107, -0.9333>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5630, -0.0237, 0.9337>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6869, -0.2798, 2.1255>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.1937, -0.3655, 1.1012>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.4074, 1.1870, 1.4099>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_9 = union {
  cylinder { <0.0034, -0.0087, -0.0037>, <1.3505, 0.0033, -0.0087>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0034, -0.0087, -0.0037>, <-0.5707, 0.0107, -0.9333>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0034, -0.0087, -0.0037>, <-0.5630, -0.0237, 0.9337>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3505, 0.0033, -0.0087>, <2.1827, 0.0547, 1.2029>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3505, 0.0033, -0.0087>, <1.8776, 0.0486, -0.9697>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1827, 0.0547, 1.2029>, <1.6869, -0.2798, 2.1255>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1827, 0.0547, 1.2029>, <3.1937, -0.3655, 1.1012>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1827, 0.0547, 1.2029>, <2.4074, 1.1870, 1.4099>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.7730, 2.9639, 1.9697>, <2.4074, 1.1870, 1.4099>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[9] = union {
    object {AtomsGroup_9}
    object {BondsGroup_9}
}
// End of Section 9
        //Begin of Section 10  
#declare AtomsGroup_10 = union {
  sphere { <0.0042, -0.0077, -0.0030>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3509, 0.0030, -0.0084>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1828, 0.0536, 1.2029>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.7685, 2.9481, 1.9642>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8785, 0.0486, -0.9686>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5703, 0.0135, -0.9328>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5630, -0.0235, 0.9342>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6870, -0.2765, 2.1265>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.1960, -0.3599, 1.1016>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.4070, 1.1912, 1.4110>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_10 = union {
  cylinder { <0.0042, -0.0077, -0.0030>, <1.3509, 0.0030, -0.0084>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0042, -0.0077, -0.0030>, <-0.5703, 0.0135, -0.9328>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0042, -0.0077, -0.0030>, <-0.5630, -0.0235, 0.9342>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3509, 0.0030, -0.0084>, <2.1828, 0.0536, 1.2029>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3509, 0.0030, -0.0084>, <1.8785, 0.0486, -0.9686>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1828, 0.0536, 1.2029>, <1.6870, -0.2765, 2.1265>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1828, 0.0536, 1.2029>, <3.1960, -0.3599, 1.1016>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1828, 0.0536, 1.2029>, <2.4070, 1.1912, 1.4110>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.7685, 2.9481, 1.9642>, <2.4070, 1.1912, 1.4110>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[10] = union {
    object {AtomsGroup_10}
    object {BondsGroup_10}
}
// End of Section 10
        //Begin of Section 11  
#declare AtomsGroup_11 = union {
  sphere { <0.0037, -0.0066, -0.0025>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3523, 0.0022, -0.0075>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1824, 0.0526, 1.2023>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.7643, 2.9330, 1.9590>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8795, 0.0486, -0.9680>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5700, 0.0158, -0.9323>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5631, -0.0233, 0.9345>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6866, -0.2735, 2.1277>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.1985, -0.3552, 1.1016>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.4073, 1.1969, 1.4127>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_11 = union {
  cylinder { <0.0037, -0.0066, -0.0025>, <1.3523, 0.0022, -0.0075>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0037, -0.0066, -0.0025>, <-0.5700, 0.0158, -0.9323>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0037, -0.0066, -0.0025>, <-0.5631, -0.0233, 0.9345>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3523, 0.0022, -0.0075>, <2.1824, 0.0526, 1.2023>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3523, 0.0022, -0.0075>, <1.8795, 0.0486, -0.9680>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1824, 0.0526, 1.2023>, <1.6866, -0.2735, 2.1277>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1824, 0.0526, 1.2023>, <3.1985, -0.3552, 1.1016>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1824, 0.0526, 1.2023>, <2.4073, 1.1969, 1.4127>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.7643, 2.9330, 1.9590>, <2.4073, 1.1969, 1.4127>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[11] = union {
    object {AtomsGroup_11}
    object {BondsGroup_11}
}
// End of Section 11
        //Begin of Section 12  
#declare AtomsGroup_12 = union {
  sphere { <0.0044, -0.0053, -0.0020>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3522, 0.0010, -0.0073>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1821, 0.0492, 1.2016>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.7604, 2.9188, 1.9542>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8804, 0.0488, -0.9674>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5699, 0.0177, -0.9322>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5634, -0.0234, 0.9352>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6858, -0.2709, 2.1289>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2010, -0.3511, 1.1013>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.4087, 1.2055, 1.4152>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_12 = union {
  cylinder { <0.0044, -0.0053, -0.0020>, <1.3522, 0.0010, -0.0073>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0044, -0.0053, -0.0020>, <-0.5699, 0.0177, -0.9322>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0044, -0.0053, -0.0020>, <-0.5634, -0.0234, 0.9352>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3522, 0.0010, -0.0073>, <2.1821, 0.0492, 1.2016>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3522, 0.0010, -0.0073>, <1.8804, 0.0488, -0.9674>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1821, 0.0492, 1.2016>, <1.6858, -0.2709, 2.1289>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1821, 0.0492, 1.2016>, <3.2010, -0.3511, 1.1013>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1821, 0.0492, 1.2016>, <2.4087, 1.2055, 1.4152>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.7604, 2.9188, 1.9542>, <2.4087, 1.2055, 1.4152>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[12] = union {
    object {AtomsGroup_12}
    object {BondsGroup_12}
}
// End of Section 12
        //Begin of Section 13  
#declare AtomsGroup_13 = union {
  sphere { <0.0024, -0.0040, -0.0016>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3544, -0.0002, -0.0068>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1805, 0.0440, 1.1998>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.7574, 2.9077, 1.9505>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8811, 0.0491, -0.9669>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5695, 0.0189, -0.9318>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5634, -0.0234, 0.9354>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6848, -0.2688, 2.1303>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2034, -0.3479, 1.1009>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.4104, 1.2150, 1.4178>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_13 = union {
  cylinder { <0.0024, -0.0040, -0.0016>, <1.3544, -0.0002, -0.0068>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0024, -0.0040, -0.0016>, <-0.5695, 0.0189, -0.9318>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0024, -0.0040, -0.0016>, <-0.5634, -0.0234, 0.9354>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3544, -0.0002, -0.0068>, <2.1805, 0.0440, 1.1998>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3544, -0.0002, -0.0068>, <1.8811, 0.0491, -0.9669>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1805, 0.0440, 1.1998>, <1.6848, -0.2688, 2.1303>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1805, 0.0440, 1.1998>, <3.2034, -0.3479, 1.1009>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1805, 0.0440, 1.1998>, <2.4104, 1.2150, 1.4178>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.7574, 2.9077, 1.9505>, <2.4104, 1.2150, 1.4178>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[13] = union {
    object {AtomsGroup_13}
    object {BondsGroup_13}
}
// End of Section 13
        //Begin of Section 14  
#declare AtomsGroup_14 = union {
  sphere { <0.0006, -0.0032, -0.0014>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3563, -0.0008, -0.0059>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1790, 0.0402, 1.1979>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.7557, 2.9015, 1.9484>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8816, 0.0493, -0.9668>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5692, 0.0195, -0.9315>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5634, -0.0235, 0.9355>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6841, -0.2676, 2.1313>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2051, -0.3462, 1.1007>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.4116, 1.2212, 1.4194>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_14 = union {
  cylinder { <0.0006, -0.0032, -0.0014>, <1.3563, -0.0008, -0.0059>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0006, -0.0032, -0.0014>, <-0.5692, 0.0195, -0.9315>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0006, -0.0032, -0.0014>, <-0.5634, -0.0235, 0.9355>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3563, -0.0008, -0.0059>, <2.1790, 0.0402, 1.1979>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3563, -0.0008, -0.0059>, <1.8816, 0.0493, -0.9668>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1790, 0.0402, 1.1979>, <1.6841, -0.2676, 2.1313>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1790, 0.0402, 1.1979>, <3.2051, -0.3462, 1.1007>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1790, 0.0402, 1.1979>, <2.4116, 1.2212, 1.4194>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.7557, 2.9015, 1.9484>, <2.4116, 1.2212, 1.4194>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[14] = union {
    object {AtomsGroup_14}
    object {BondsGroup_14}
}
// End of Section 14
        //Begin of Section 15  
#declare AtomsGroup_15 = union {
  sphere { <0.0029, -0.0011, -0.0003>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3569, -0.0005, -0.0044>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1741, 0.0221, 1.1919>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.7524, 2.8900, 1.9445>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8822, 0.0496, -0.9655>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5689, 0.0202, -0.9315>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5639, -0.0236, 0.9362>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6832, -0.2636, 2.1327>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2073, -0.3410, 1.1005>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.4152, 1.2381, 1.4235>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_15 = union {
  cylinder { <0.0029, -0.0011, -0.0003>, <1.3569, -0.0005, -0.0044>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0029, -0.0011, -0.0003>, <-0.5689, 0.0202, -0.9315>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0029, -0.0011, -0.0003>, <-0.5639, -0.0236, 0.9362>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3569, -0.0005, -0.0044>, <2.1741, 0.0221, 1.1919>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3569, -0.0005, -0.0044>, <1.8822, 0.0496, -0.9655>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1741, 0.0221, 1.1919>, <1.6832, -0.2636, 2.1327>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1741, 0.0221, 1.1919>, <3.2073, -0.3410, 1.1005>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1741, 0.0221, 1.1919>, <2.4152, 1.2381, 1.4235>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.7524, 2.8900, 1.9445>, <2.4152, 1.2381, 1.4235>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[15] = union {
    object {AtomsGroup_15}
    object {BondsGroup_15}
}
// End of Section 15
        //Begin of Section 16  
#declare AtomsGroup_16 = union {
  sphere { <0.0000, 0.0000, 0.0000>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3629, 0.0000, 0.0000>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1677, 0.0000, 1.1832>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.7525, 2.8905, 1.9446>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8861, 0.0492, -0.9623>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5697, 0.0237, -0.9321>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5663, -0.0251, 0.9365>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6838, -0.2370, 2.1380>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2166, -0.3047, 1.1023>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.4379, 1.3803, 1.4525>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_16 = union {
  cylinder { <0.0000, 0.0000, 0.0000>, <1.3629, 0.0000, 0.0000>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0000, 0.0000, 0.0000>, <-0.5697, 0.0237, -0.9321>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0000, 0.0000, 0.0000>, <-0.5663, -0.0251, 0.9365>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3629, 0.0000, 0.0000>, <2.1677, 0.0000, 1.1832>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3629, 0.0000, 0.0000>, <1.8861, 0.0492, -0.9623>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1677, 0.0000, 1.1832>, <1.6838, -0.2370, 2.1380>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1677, 0.0000, 1.1832>, <3.2166, -0.3047, 1.1023>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1677, 0.0000, 1.1832>, <2.4379, 1.3803, 1.4525>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.7525, 2.8905, 1.9446>, <2.4379, 1.3803, 1.4525>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[16] = union {
    object {AtomsGroup_16}
    object {BondsGroup_16}
}
// End of Section 16
        //Begin of Section 17  
#declare AtomsGroup_17 = union {
  sphere { <-0.0029, 0.0011, 0.0003>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3689, 0.0005, 0.0044>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1612, -0.0221, 1.1745>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.7526, 2.8910, 1.9447>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8900, 0.0487, -0.9590>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5706, 0.0271, -0.9327>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5687, -0.0267, 0.9367>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6843, -0.2104, 2.1434>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2259, -0.2683, 1.1041>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.4606, 1.5226, 1.4815>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_17 = union {
  cylinder { <-0.0029, 0.0011, 0.0003>, <1.3689, 0.0005, 0.0044>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0029, 0.0011, 0.0003>, <-0.5706, 0.0271, -0.9327>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0029, 0.0011, 0.0003>, <-0.5687, -0.0267, 0.9367>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3689, 0.0005, 0.0044>, <2.1612, -0.0221, 1.1745>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3689, 0.0005, 0.0044>, <1.8900, 0.0487, -0.9590>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1612, -0.0221, 1.1745>, <1.6843, -0.2104, 2.1434>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1612, -0.0221, 1.1745>, <3.2259, -0.2683, 1.1041>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1612, -0.0221, 1.1745>, <2.4606, 1.5226, 1.4815>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.7526, 2.8910, 1.9447>, <2.4606, 1.5226, 1.4815>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[17] = union {
    object {AtomsGroup_17}
    object {BondsGroup_17}
}
// End of Section 17
        //Begin of Section 18  
#declare AtomsGroup_18 = union {
  sphere { <-0.0034, 0.0029, 0.0007>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3676, -0.0024, 0.0022>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1585, -0.0555, 1.1708>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.7621, 2.9302, 1.9576>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8907, 0.0482, -0.9586>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5717, 0.0281, -0.9340>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5705, -0.0273, 0.9370>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6849, -0.2084, 2.1421>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2267, -0.2644, 1.1041>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.4564, 1.5120, 1.4760>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_18 = union {
  cylinder { <-0.0034, 0.0029, 0.0007>, <1.3676, -0.0024, 0.0022>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0034, 0.0029, 0.0007>, <-0.5717, 0.0281, -0.9340>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0034, 0.0029, 0.0007>, <-0.5705, -0.0273, 0.9370>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3676, -0.0024, 0.0022>, <2.1585, -0.0555, 1.1708>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3676, -0.0024, 0.0022>, <1.8907, 0.0482, -0.9586>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1585, -0.0555, 1.1708>, <1.6849, -0.2084, 2.1421>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1585, -0.0555, 1.1708>, <3.2267, -0.2644, 1.1041>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1585, -0.0555, 1.1708>, <2.4564, 1.5120, 1.4760>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.7621, 2.9302, 1.9576>, <2.4564, 1.5120, 1.4760>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[18] = union {
    object {AtomsGroup_18}
    object {BondsGroup_18}
}
// End of Section 18
        //Begin of Section 19  
#declare AtomsGroup_19 = union {
  sphere { <-0.0051, 0.0032, 0.0002>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3683, -0.0052, 0.0029>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1577, -0.0599, 1.1688>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.7624, 2.9295, 1.9573>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8909, 0.0480, -0.9592>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5721, 0.0290, -0.9340>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5709, -0.0276, 0.9367>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6843, -0.2095, 2.1430>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2281, -0.2647, 1.1038>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.4575, 1.5206, 1.4784>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_19 = union {
  cylinder { <-0.0051, 0.0032, 0.0002>, <1.3683, -0.0052, 0.0029>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0051, 0.0032, 0.0002>, <-0.5721, 0.0290, -0.9340>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0051, 0.0032, 0.0002>, <-0.5709, -0.0276, 0.9367>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3683, -0.0052, 0.0029>, <2.1577, -0.0599, 1.1688>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3683, -0.0052, 0.0029>, <1.8909, 0.0480, -0.9592>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1577, -0.0599, 1.1688>, <1.6843, -0.2095, 2.1430>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1577, -0.0599, 1.1688>, <3.2281, -0.2647, 1.1038>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1577, -0.0599, 1.1688>, <2.4575, 1.5206, 1.4784>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.7624, 2.9295, 1.9573>, <2.4575, 1.5206, 1.4784>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[19] = union {
    object {AtomsGroup_19}
    object {BondsGroup_19}
}
// End of Section 19
        //Begin of Section 20  
#declare AtomsGroup_20 = union {
  sphere { <-0.0082, 0.0038, -0.0008>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3693, -0.0133, 0.0032>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1559, -0.0788, 1.1646>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.7645, 2.9325, 1.9580>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8912, 0.0463, -0.9599>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5738, 0.0324, -0.9349>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5727, -0.0288, 0.9360>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6835, -0.2130, 2.1437>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2307, -0.2649, 1.1029>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.4607, 1.5470, 1.4851>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_20 = union {
  cylinder { <-0.0082, 0.0038, -0.0008>, <1.3693, -0.0133, 0.0032>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0082, 0.0038, -0.0008>, <-0.5738, 0.0324, -0.9349>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0082, 0.0038, -0.0008>, <-0.5727, -0.0288, 0.9360>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3693, -0.0133, 0.0032>, <2.1559, -0.0788, 1.1646>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3693, -0.0133, 0.0032>, <1.8912, 0.0463, -0.9599>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1559, -0.0788, 1.1646>, <1.6835, -0.2130, 2.1437>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1559, -0.0788, 1.1646>, <3.2307, -0.2649, 1.1029>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.7645, 2.9325, 1.9580>, <2.4607, 1.5470, 1.4851>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[20] = union {
    object {AtomsGroup_20}
    object {BondsGroup_20}
}
// End of Section 20
        //Begin of Section 21  
#declare AtomsGroup_21 = union {
  sphere { <-0.0095, 0.0030, -0.0016>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3694, -0.0200, 0.0029>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1537, -0.1031, 1.1608>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.7692, 2.9476, 1.9628>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8909, 0.0427, -0.9596>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5754, 0.0372, -0.9356>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5747, -0.0301, 0.9348>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6838, -0.2175, 2.1424>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2314, -0.2651, 1.1019>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.4625, 1.5687, 1.4891>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_21 = union {
  cylinder { <-0.0095, 0.0030, -0.0016>, <1.3694, -0.0200, 0.0029>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0095, 0.0030, -0.0016>, <-0.5754, 0.0372, -0.9356>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0095, 0.0030, -0.0016>, <-0.5747, -0.0301, 0.9348>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3694, -0.0200, 0.0029>, <2.1537, -0.1031, 1.1608>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3694, -0.0200, 0.0029>, <1.8909, 0.0427, -0.9596>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1537, -0.1031, 1.1608>, <1.6838, -0.2175, 2.1424>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1537, -0.1031, 1.1608>, <3.2314, -0.2651, 1.1019>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.7692, 2.9476, 1.9628>, <2.4625, 1.5687, 1.4891>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[21] = union {
    object {AtomsGroup_21}
    object {BondsGroup_21}
}
// End of Section 21
        //Begin of Section 22  
#declare AtomsGroup_22 = union {
  sphere { <-0.0118, 0.0024, -0.0027>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3686, -0.0288, 0.0022>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1521, -0.1211, 1.1581>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.7729, 2.9583, 1.9662>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8911, 0.0382, -0.9605>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5769, 0.0429, -0.9364>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5769, -0.0321, 0.9339>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6832, -0.2248, 2.1423>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2335, -0.2673, 1.1003>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.4654, 1.5957, 1.4946>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_22 = union {
  cylinder { <-0.0118, 0.0024, -0.0027>, <1.3686, -0.0288, 0.0022>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0118, 0.0024, -0.0027>, <-0.5769, 0.0429, -0.9364>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0118, 0.0024, -0.0027>, <-0.5769, -0.0321, 0.9339>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3686, -0.0288, 0.0022>, <2.1521, -0.1211, 1.1581>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3686, -0.0288, 0.0022>, <1.8911, 0.0382, -0.9605>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1521, -0.1211, 1.1581>, <1.6832, -0.2248, 2.1423>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1521, -0.1211, 1.1581>, <3.2335, -0.2673, 1.1003>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.7729, 2.9583, 1.9662>, <2.4654, 1.5957, 1.4946>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[22] = union {
    object {AtomsGroup_22}
    object {BondsGroup_22}
}
// End of Section 22
        //Begin of Section 23  
#declare AtomsGroup_23 = union {
  sphere { <-0.0123, 0.0008, -0.0035>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3686, -0.0360, 0.0023>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1509, -0.1392, 1.1556>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.7787, 2.9784, 1.9728>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8901, 0.0320, -0.9603>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5785, 0.0493, -0.9374>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5792, -0.0343, 0.9325>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6838, -0.2331, 2.1401>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2327, -0.2699, 1.0988>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.4665, 1.6154, 1.4972>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_23 = union {
  cylinder { <-0.0123, 0.0008, -0.0035>, <1.3686, -0.0360, 0.0023>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0123, 0.0008, -0.0035>, <-0.5785, 0.0493, -0.9374>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0123, 0.0008, -0.0035>, <-0.5792, -0.0343, 0.9325>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3686, -0.0360, 0.0023>, <2.1509, -0.1392, 1.1556>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3686, -0.0360, 0.0023>, <1.8901, 0.0320, -0.9603>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1509, -0.1392, 1.1556>, <1.6838, -0.2331, 2.1401>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1509, -0.1392, 1.1556>, <3.2327, -0.2699, 1.0988>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.7787, 2.9784, 1.9728>, <2.4665, 1.6154, 1.4972>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[23] = union {
    object {AtomsGroup_23}
    object {BondsGroup_23}
}
// End of Section 23
        //Begin of Section 24  
#declare AtomsGroup_24 = union {
  sphere { <-0.0144, -0.0004, -0.0044>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3664, -0.0436, 0.0013>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1500, -0.1502, 1.1535>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.7819, 2.9877, 1.9757>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8902, 0.0259, -0.9615>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5789, 0.0555, -0.9379>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5811, -0.0368, 0.9311>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6830, -0.2429, 2.1407>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2348, -0.2742, 1.0968>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.4693, 1.6423, 1.5026>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_24 = union {
  cylinder { <-0.0144, -0.0004, -0.0044>, <1.3664, -0.0436, 0.0013>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0144, -0.0004, -0.0044>, <-0.5789, 0.0555, -0.9379>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0144, -0.0004, -0.0044>, <-0.5811, -0.0368, 0.9311>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3664, -0.0436, 0.0013>, <2.1500, -0.1502, 1.1535>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3664, -0.0436, 0.0013>, <1.8902, 0.0259, -0.9615>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1500, -0.1502, 1.1535>, <1.6830, -0.2429, 2.1407>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1500, -0.1502, 1.1535>, <3.2348, -0.2742, 1.0968>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.7819, 2.9877, 1.9757>, <2.4693, 1.6423, 1.5026>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[24] = union {
    object {AtomsGroup_24}
    object {BondsGroup_24}
}
// End of Section 24
        //Begin of Section 25  
#declare AtomsGroup_25 = union {
  sphere { <-0.0139, -0.0009, -0.0047>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3666, -0.0454, 0.0020>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1499, -0.1547, 1.1528>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.7841, 2.9959, 1.9785>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8897, 0.0237, -0.9615>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5795, 0.0575, -0.9385>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5819, -0.0376, 0.9310>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6834, -0.2458, 2.1396>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2338, -0.2754, 1.0963>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.4691, 1.6461, 1.5026>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_25 = union {
  cylinder { <-0.0139, -0.0009, -0.0047>, <1.3666, -0.0454, 0.0020>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0139, -0.0009, -0.0047>, <-0.5795, 0.0575, -0.9385>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0139, -0.0009, -0.0047>, <-0.5819, -0.0376, 0.9310>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3666, -0.0454, 0.0020>, <2.1499, -0.1547, 1.1528>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3666, -0.0454, 0.0020>, <1.8897, 0.0237, -0.9615>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1499, -0.1547, 1.1528>, <1.6834, -0.2458, 2.1396>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1499, -0.1547, 1.1528>, <3.2338, -0.2754, 1.0963>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.7841, 2.9959, 1.9785>, <2.4691, 1.6461, 1.5026>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[25] = union {
    object {AtomsGroup_25}
    object {BondsGroup_25}
}
// End of Section 25
        //Begin of Section 26  
#declare AtomsGroup_26 = union {
  sphere { <-0.0148, -0.0012, -0.0050>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3672, -0.0466, 0.0018>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1495, -0.1569, 1.1525>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.7851, 2.9992, 1.9795>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8893, 0.0223, -0.9614>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5795, 0.0587, -0.9384>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5823, -0.0381, 0.9306>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6836, -0.2477, 2.1392>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2338, -0.2763, 1.0959>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.4693, 1.6499, 1.5032>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_26 = union {
  cylinder { <-0.0148, -0.0012, -0.0050>, <1.3672, -0.0466, 0.0018>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0148, -0.0012, -0.0050>, <-0.5795, 0.0587, -0.9384>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0148, -0.0012, -0.0050>, <-0.5823, -0.0381, 0.9306>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3672, -0.0466, 0.0018>, <2.1495, -0.1569, 1.1525>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3672, -0.0466, 0.0018>, <1.8893, 0.0223, -0.9614>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1495, -0.1569, 1.1525>, <1.6836, -0.2477, 2.1392>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1495, -0.1569, 1.1525>, <3.2338, -0.2763, 1.0959>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.7851, 2.9992, 1.9795>, <2.4693, 1.6499, 1.5032>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[26] = union {
    object {AtomsGroup_26}
    object {BondsGroup_26}
}
// End of Section 26
        //Begin of Section 27  
#declare AtomsGroup_27 = union {
  sphere { <-0.0159, -0.0016, -0.0053>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3678, -0.0483, 0.0012>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1491, -0.1601, 1.1524>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.7864, 3.0038, 1.9810>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8889, 0.0204, -0.9613>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5795, 0.0604, -0.9384>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5827, -0.0388, 0.9301>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6837, -0.2504, 2.1388>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2337, -0.2776, 1.0953>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.4697, 1.6556, 1.5040>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_27 = union {
  cylinder { <-0.0159, -0.0016, -0.0053>, <1.3678, -0.0483, 0.0012>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0159, -0.0016, -0.0053>, <-0.5795, 0.0604, -0.9384>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0159, -0.0016, -0.0053>, <-0.5827, -0.0388, 0.9301>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3678, -0.0483, 0.0012>, <2.1491, -0.1601, 1.1524>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3678, -0.0483, 0.0012>, <1.8889, 0.0204, -0.9613>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1491, -0.1601, 1.1524>, <1.6837, -0.2504, 2.1388>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1491, -0.1601, 1.1524>, <3.2337, -0.2776, 1.0953>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.7864, 3.0038, 1.9810>, <2.4697, 1.6556, 1.5040>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[27] = union {
    object {AtomsGroup_27}
    object {BondsGroup_27}
}
// End of Section 27
        //Begin of Section 28  
#declare AtomsGroup_28 = union {
  sphere { <-0.0160, -0.0020, -0.0054>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3673, -0.0501, 0.0012>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1489, -0.1632, 1.1518>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.7877, 3.0083, 1.9825>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8887, 0.0185, -0.9615>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5796, 0.0621, -0.9386>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5833, -0.0395, 0.9297>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6838, -0.2532, 2.1385>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2337, -0.2790, 1.0948>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.4700, 1.6615, 1.5050>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_28 = union {
  cylinder { <-0.0160, -0.0020, -0.0054>, <1.3673, -0.0501, 0.0012>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0160, -0.0020, -0.0054>, <-0.5796, 0.0621, -0.9386>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0160, -0.0020, -0.0054>, <-0.5833, -0.0395, 0.9297>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3673, -0.0501, 0.0012>, <2.1489, -0.1632, 1.1518>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3673, -0.0501, 0.0012>, <1.8887, 0.0185, -0.9615>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1489, -0.1632, 1.1518>, <1.6838, -0.2532, 2.1385>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1489, -0.1632, 1.1518>, <3.2337, -0.2790, 1.0948>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.7877, 3.0083, 1.9825>, <2.4700, 1.6615, 1.5050>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[28] = union {
    object {AtomsGroup_28}
    object {BondsGroup_28}
}
// End of Section 28
        //Begin of Section 29  
#declare AtomsGroup_29 = union {
  sphere { <-0.0163, -0.0024, -0.0057>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3671, -0.0519, 0.0012>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1487, -0.1663, 1.1514>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.7891, 3.0129, 1.9840>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8884, 0.0165, -0.9616>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5798, 0.0639, -0.9388>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5839, -0.0403, 0.9293>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6839, -0.2561, 2.1382>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2336, -0.2805, 1.0942>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.4704, 1.6676, 1.5059>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_29 = union {
  cylinder { <-0.0163, -0.0024, -0.0057>, <1.3671, -0.0519, 0.0012>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0163, -0.0024, -0.0057>, <-0.5798, 0.0639, -0.9388>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0163, -0.0024, -0.0057>, <-0.5839, -0.0403, 0.9293>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3671, -0.0519, 0.0012>, <2.1487, -0.1663, 1.1514>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3671, -0.0519, 0.0012>, <1.8884, 0.0165, -0.9616>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1487, -0.1663, 1.1514>, <1.6839, -0.2561, 2.1382>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1487, -0.1663, 1.1514>, <3.2336, -0.2805, 1.0942>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.7891, 3.0129, 1.9840>, <2.4704, 1.6676, 1.5059>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[29] = union {
    object {AtomsGroup_29}
    object {BondsGroup_29}
}
// End of Section 29
        //Begin of Section 30  
#declare AtomsGroup_30 = union {
  sphere { <-0.0166, -0.0028, -0.0059>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3668, -0.0537, 0.0012>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1485, -0.1694, 1.1508>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.7905, 3.0176, 1.9855>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8882, 0.0145, -0.9618>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5799, 0.0656, -0.9391>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5845, -0.0411, 0.9290>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6839, -0.2590, 2.1379>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2336, -0.2820, 1.0935>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.4708, 1.6737, 1.5069>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_30 = union {
  cylinder { <-0.0166, -0.0028, -0.0059>, <1.3668, -0.0537, 0.0012>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0166, -0.0028, -0.0059>, <-0.5799, 0.0656, -0.9391>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0166, -0.0028, -0.0059>, <-0.5845, -0.0411, 0.9290>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3668, -0.0537, 0.0012>, <2.1485, -0.1694, 1.1508>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3668, -0.0537, 0.0012>, <1.8882, 0.0145, -0.9618>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1485, -0.1694, 1.1508>, <1.6839, -0.2590, 2.1379>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1485, -0.1694, 1.1508>, <3.2336, -0.2820, 1.0935>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.7905, 3.0176, 1.9855>, <2.4708, 1.6737, 1.5069>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[30] = union {
    object {AtomsGroup_30}
    object {BondsGroup_30}
}
// End of Section 30
        //Begin of Section 31  
#declare AtomsGroup_31 = union {
  sphere { <-0.0171, -0.0032, -0.0061>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3667, -0.0554, 0.0009>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1483, -0.1725, 1.1505>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.7919, 3.0223, 1.9870>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8878, 0.0125, -0.9619>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5800, 0.0674, -0.9393>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5851, -0.0419, 0.9285>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6840, -0.2619, 2.1376>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2335, -0.2836, 1.0929>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.4711, 1.6798, 1.5078>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_31 = union {
  cylinder { <-0.0171, -0.0032, -0.0061>, <1.3667, -0.0554, 0.0009>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0171, -0.0032, -0.0061>, <-0.5800, 0.0674, -0.9393>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0171, -0.0032, -0.0061>, <-0.5851, -0.0419, 0.9285>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3667, -0.0554, 0.0009>, <2.1483, -0.1725, 1.1505>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3667, -0.0554, 0.0009>, <1.8878, 0.0125, -0.9619>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1483, -0.1725, 1.1505>, <1.6840, -0.2619, 2.1376>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1483, -0.1725, 1.1505>, <3.2335, -0.2836, 1.0929>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.7919, 3.0223, 1.9870>, <2.4711, 1.6798, 1.5078>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[31] = union {
    object {AtomsGroup_31}
    object {BondsGroup_31}
}
// End of Section 31
        //Begin of Section 32  
#declare AtomsGroup_32 = union {
  sphere { <-0.0172, -0.0037, -0.0064>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3663, -0.0572, 0.0010>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1481, -0.1754, 1.1499>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.7932, 3.0270, 1.9885>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8876, 0.0105, -0.9622>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5801, 0.0691, -0.9395>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5857, -0.0426, 0.9282>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6841, -0.2649, 2.1373>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2335, -0.2853, 1.0923>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.4715, 1.6858, 1.5088>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_32 = union {
  cylinder { <-0.0172, -0.0037, -0.0064>, <1.3663, -0.0572, 0.0010>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0172, -0.0037, -0.0064>, <-0.5801, 0.0691, -0.9395>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0172, -0.0037, -0.0064>, <-0.5857, -0.0426, 0.9282>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3663, -0.0572, 0.0010>, <2.1481, -0.1754, 1.1499>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3663, -0.0572, 0.0010>, <1.8876, 0.0105, -0.9622>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1481, -0.1754, 1.1499>, <1.6841, -0.2649, 2.1373>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1481, -0.1754, 1.1499>, <3.2335, -0.2853, 1.0923>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.7932, 3.0270, 1.9885>, <2.4715, 1.6858, 1.5088>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[32] = union {
    object {AtomsGroup_32}
    object {BondsGroup_32}
}
// End of Section 32
        //Begin of Section 33  
#declare AtomsGroup_33 = union {
  sphere { <-0.0178, -0.0041, -0.0065>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3663, -0.0589, 0.0006>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1479, -0.1784, 1.1497>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.7946, 3.0318, 1.9901>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8872, 0.0085, -0.9622>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5802, 0.0708, -0.9397>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5863, -0.0434, 0.9277>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6842, -0.2678, 2.1370>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2334, -0.2870, 1.0916>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.4718, 1.6919, 1.5097>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_33 = union {
  cylinder { <-0.0178, -0.0041, -0.0065>, <1.3663, -0.0589, 0.0006>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0178, -0.0041, -0.0065>, <-0.5802, 0.0708, -0.9397>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0178, -0.0041, -0.0065>, <-0.5863, -0.0434, 0.9277>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3663, -0.0589, 0.0006>, <2.1479, -0.1784, 1.1497>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3663, -0.0589, 0.0006>, <1.8872, 0.0085, -0.9622>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1479, -0.1784, 1.1497>, <1.6842, -0.2678, 2.1370>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1479, -0.1784, 1.1497>, <3.2334, -0.2870, 1.0916>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.7946, 3.0318, 1.9901>, <2.4718, 1.6919, 1.5097>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[33] = union {
    object {AtomsGroup_33}
    object {BondsGroup_33}
}
// End of Section 33
        //Begin of Section 34  
#declare AtomsGroup_34 = union {
  sphere { <-0.0180, -0.0045, -0.0068>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3660, -0.0606, 0.0006>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1477, -0.1812, 1.1492>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.7960, 3.0365, 1.9915>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8869, 0.0066, -0.9624>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5802, 0.0724, -0.9399>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5869, -0.0442, 0.9273>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6843, -0.2707, 2.1367>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2333, -0.2887, 1.0910>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.4721, 1.6978, 1.5107>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_34 = union {
  cylinder { <-0.0180, -0.0045, -0.0068>, <1.3660, -0.0606, 0.0006>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0180, -0.0045, -0.0068>, <-0.5802, 0.0724, -0.9399>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0180, -0.0045, -0.0068>, <-0.5869, -0.0442, 0.9273>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3660, -0.0606, 0.0006>, <2.1477, -0.1812, 1.1492>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3660, -0.0606, 0.0006>, <1.8869, 0.0066, -0.9624>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1477, -0.1812, 1.1492>, <1.6843, -0.2707, 2.1367>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1477, -0.1812, 1.1492>, <3.2333, -0.2887, 1.0910>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.7960, 3.0365, 1.9915>, <2.4721, 1.6978, 1.5107>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[34] = union {
    object {AtomsGroup_34}
    object {BondsGroup_34}
}
// End of Section 34
        //Begin of Section 35  
#declare AtomsGroup_35 = union {
  sphere { <-0.0185, -0.0049, -0.0070>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3658, -0.0623, 0.0004>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1476, -0.1841, 1.1489>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.7974, 3.0412, 1.9931>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8866, 0.0047, -0.9625>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5803, 0.0741, -0.9401>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5875, -0.0450, 0.9269>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6844, -0.2737, 2.1364>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2333, -0.2905, 1.0904>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.4724, 1.7038, 1.5116>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_35 = union {
  cylinder { <-0.0185, -0.0049, -0.0070>, <1.3658, -0.0623, 0.0004>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0185, -0.0049, -0.0070>, <-0.5803, 0.0741, -0.9401>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0185, -0.0049, -0.0070>, <-0.5875, -0.0450, 0.9269>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3658, -0.0623, 0.0004>, <2.1476, -0.1841, 1.1489>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3658, -0.0623, 0.0004>, <1.8866, 0.0047, -0.9625>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1476, -0.1841, 1.1489>, <1.6844, -0.2737, 2.1364>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1476, -0.1841, 1.1489>, <3.2333, -0.2905, 1.0904>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.7974, 3.0412, 1.9931>, <2.4724, 1.7038, 1.5116>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[35] = union {
    object {AtomsGroup_35}
    object {BondsGroup_35}
}
// End of Section 35
        //Begin of Section 36  
#declare AtomsGroup_36 = union {
  sphere { <-0.0187, -0.0053, -0.0072>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3655, -0.0639, 0.0004>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1474, -0.1868, 1.1484>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.7987, 3.0459, 1.9946>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8863, 0.0028, -0.9627>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5803, 0.0757, -0.9404>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5880, -0.0458, 0.9265>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6844, -0.2766, 2.1361>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2332, -0.2923, 1.0897>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.4727, 1.7096, 1.5125>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_36 = union {
  cylinder { <-0.0187, -0.0053, -0.0072>, <1.3655, -0.0639, 0.0004>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0187, -0.0053, -0.0072>, <-0.5803, 0.0757, -0.9404>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0187, -0.0053, -0.0072>, <-0.5880, -0.0458, 0.9265>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3655, -0.0639, 0.0004>, <2.1474, -0.1868, 1.1484>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3655, -0.0639, 0.0004>, <1.8863, 0.0028, -0.9627>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1474, -0.1868, 1.1484>, <1.6844, -0.2766, 2.1361>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1474, -0.1868, 1.1484>, <3.2332, -0.2923, 1.0897>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.7987, 3.0459, 1.9946>, <2.4727, 1.7096, 1.5125>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[36] = union {
    object {AtomsGroup_36}
    object {BondsGroup_36}
}
// End of Section 36
        //Begin of Section 37  
#declare AtomsGroup_37 = union {
  sphere { <-0.0190, -0.0057, -0.0074>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3653, -0.0655, 0.0003>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1472, -0.1896, 1.1480>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.8001, 3.0507, 1.9961>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8860, 0.0009, -0.9628>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5804, 0.0773, -0.9406>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5886, -0.0465, 0.9261>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6845, -0.2795, 2.1358>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2331, -0.2942, 1.0891>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.4730, 1.7156, 1.5135>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_37 = union {
  cylinder { <-0.0190, -0.0057, -0.0074>, <1.3653, -0.0655, 0.0003>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0190, -0.0057, -0.0074>, <-0.5804, 0.0773, -0.9406>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0190, -0.0057, -0.0074>, <-0.5886, -0.0465, 0.9261>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3653, -0.0655, 0.0003>, <2.1472, -0.1896, 1.1480>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3653, -0.0655, 0.0003>, <1.8860, 0.0009, -0.9628>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1472, -0.1896, 1.1480>, <1.6845, -0.2795, 2.1358>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1472, -0.1896, 1.1480>, <3.2331, -0.2942, 1.0891>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.8001, 3.0507, 1.9961>, <2.4730, 1.7156, 1.5135>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[37] = union {
    object {AtomsGroup_37}
    object {BondsGroup_37}
}
// End of Section 37
        //Begin of Section 38  
#declare AtomsGroup_38 = union {
  sphere { <-0.0193, -0.0060, -0.0076>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3650, -0.0671, 0.0002>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1470, -0.1924, 1.1476>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.8015, 3.0554, 1.9976>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8857, -0.0010, -0.9630>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5804, 0.0788, -0.9408>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5892, -0.0473, 0.9257>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6846, -0.2824, 2.1355>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2330, -0.2961, 1.0884>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.4732, 1.7215, 1.5144>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_38 = union {
  cylinder { <-0.0193, -0.0060, -0.0076>, <1.3650, -0.0671, 0.0002>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0193, -0.0060, -0.0076>, <-0.5804, 0.0788, -0.9408>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0193, -0.0060, -0.0076>, <-0.5892, -0.0473, 0.9257>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3650, -0.0671, 0.0002>, <2.1470, -0.1924, 1.1476>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3650, -0.0671, 0.0002>, <1.8857, -0.0010, -0.9630>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1470, -0.1924, 1.1476>, <1.6846, -0.2824, 2.1355>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1470, -0.1924, 1.1476>, <3.2330, -0.2961, 1.0884>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.8015, 3.0554, 1.9976>, <2.4732, 1.7215, 1.5144>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[38] = union {
    object {AtomsGroup_38}
    object {BondsGroup_38}
}
// End of Section 38
        //Begin of Section 39  
#declare AtomsGroup_39 = union {
  sphere { <-0.0195, -0.0064, -0.0079>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3648, -0.0687, 0.0002>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1469, -0.1951, 1.1471>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.8029, 3.0602, 1.9991>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8854, -0.0028, -0.9632>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5804, 0.0803, -0.9410>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5898, -0.0481, 0.9254>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6847, -0.2854, 2.1352>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2329, -0.2981, 1.0878>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.4735, 1.7275, 1.5153>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_39 = union {
  cylinder { <-0.0195, -0.0064, -0.0079>, <1.3648, -0.0687, 0.0002>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0195, -0.0064, -0.0079>, <-0.5804, 0.0803, -0.9410>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0195, -0.0064, -0.0079>, <-0.5898, -0.0481, 0.9254>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3648, -0.0687, 0.0002>, <2.1469, -0.1951, 1.1471>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3648, -0.0687, 0.0002>, <1.8854, -0.0028, -0.9632>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1469, -0.1951, 1.1471>, <1.6847, -0.2854, 2.1352>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1469, -0.1951, 1.1471>, <3.2329, -0.2981, 1.0878>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.8029, 3.0602, 1.9991>, <2.4735, 1.7275, 1.5153>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[39] = union {
    object {AtomsGroup_39}
    object {BondsGroup_39}
}
// End of Section 39
        //Begin of Section 40  
#declare AtomsGroup_40 = union {
  sphere { <-0.0200, -0.0068, -0.0080>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3646, -0.0703, -0.0001>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1467, -0.1979, 1.1468>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.8043, 3.0651, 2.0006>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8851, -0.0047, -0.9633>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5804, 0.0819, -0.9412>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5904, -0.0489, 0.9249>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6848, -0.2883, 2.1349>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2327, -0.3001, 1.0871>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.4737, 1.7335, 1.5162>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_40 = union {
  cylinder { <-0.0200, -0.0068, -0.0080>, <1.3646, -0.0703, -0.0001>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0200, -0.0068, -0.0080>, <-0.5804, 0.0819, -0.9412>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0200, -0.0068, -0.0080>, <-0.5904, -0.0489, 0.9249>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3646, -0.0703, -0.0001>, <2.1467, -0.1979, 1.1468>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3646, -0.0703, -0.0001>, <1.8851, -0.0047, -0.9633>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1467, -0.1979, 1.1468>, <1.6848, -0.2883, 2.1349>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1467, -0.1979, 1.1468>, <3.2327, -0.3001, 1.0871>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.8043, 3.0651, 2.0006>, <2.4737, 1.7335, 1.5162>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[40] = union {
    object {AtomsGroup_40}
    object {BondsGroup_40}
}
// End of Section 40
        //Begin of Section 41  
#declare AtomsGroup_41 = union {
  sphere { <-0.0202, -0.0072, -0.0083>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3643, -0.0718, -0.0000>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1465, -0.2005, 1.1463>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.8056, 3.0697, 2.0021>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8848, -0.0064, -0.9635>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5805, 0.0833, -0.9414>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5909, -0.0496, 0.9246>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6849, -0.2912, 2.1347>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2326, -0.3022, 1.0864>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.4740, 1.7392, 1.5171>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_41 = union {
  cylinder { <-0.0202, -0.0072, -0.0083>, <1.3643, -0.0718, -0.0000>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0202, -0.0072, -0.0083>, <-0.5805, 0.0833, -0.9414>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0202, -0.0072, -0.0083>, <-0.5909, -0.0496, 0.9246>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3643, -0.0718, -0.0000>, <2.1465, -0.2005, 1.1463>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3643, -0.0718, -0.0000>, <1.8848, -0.0064, -0.9635>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1465, -0.2005, 1.1463>, <1.6849, -0.2912, 2.1347>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1465, -0.2005, 1.1463>, <3.2326, -0.3022, 1.0864>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.8056, 3.0697, 2.0021>, <2.4740, 1.7392, 1.5171>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[41] = union {
    object {AtomsGroup_41}
    object {BondsGroup_41}
}
// End of Section 41
        //Begin of Section 42  
#declare AtomsGroup_42 = union {
  sphere { <-0.0205, -0.0076, -0.0084>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3641, -0.0734, -0.0002>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1464, -0.2032, 1.1460>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.8070, 3.0746, 2.0036>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8845, -0.0082, -0.9636>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5805, 0.0847, -0.9416>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5915, -0.0504, 0.9242>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6850, -0.2941, 2.1343>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2325, -0.3043, 1.0857>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.4742, 1.7452, 1.5181>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_42 = union {
  cylinder { <-0.0205, -0.0076, -0.0084>, <1.3641, -0.0734, -0.0002>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0205, -0.0076, -0.0084>, <-0.5805, 0.0847, -0.9416>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0205, -0.0076, -0.0084>, <-0.5915, -0.0504, 0.9242>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3641, -0.0734, -0.0002>, <2.1464, -0.2032, 1.1460>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3641, -0.0734, -0.0002>, <1.8845, -0.0082, -0.9636>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1464, -0.2032, 1.1460>, <1.6850, -0.2941, 2.1343>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1464, -0.2032, 1.1460>, <3.2325, -0.3043, 1.0857>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.8070, 3.0746, 2.0036>, <2.4742, 1.7452, 1.5181>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[42] = union {
    object {AtomsGroup_42}
    object {BondsGroup_42}
}
// End of Section 42
        //Begin of Section 43  
#declare AtomsGroup_43 = union {
  sphere { <-0.0207, -0.0080, -0.0087>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3638, -0.0749, -0.0002>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1462, -0.2058, 1.1455>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.8084, 3.0793, 2.0051>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8842, -0.0099, -0.9638>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5805, 0.0861, -0.9418>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5920, -0.0511, 0.9238>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6851, -0.2970, 2.1341>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2324, -0.3065, 1.0851>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.4744, 1.7511, 1.5190>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_43 = union {
  cylinder { <-0.0207, -0.0080, -0.0087>, <1.3638, -0.0749, -0.0002>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0207, -0.0080, -0.0087>, <-0.5805, 0.0861, -0.9418>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0207, -0.0080, -0.0087>, <-0.5920, -0.0511, 0.9238>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3638, -0.0749, -0.0002>, <2.1462, -0.2058, 1.1455>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3638, -0.0749, -0.0002>, <1.8842, -0.0099, -0.9638>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1462, -0.2058, 1.1455>, <1.6851, -0.2970, 2.1341>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1462, -0.2058, 1.1455>, <3.2324, -0.3065, 1.0851>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.8084, 3.0793, 2.0051>, <2.4744, 1.7511, 1.5190>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[43] = union {
    object {AtomsGroup_43}
    object {BondsGroup_43}
}
// End of Section 43
        //Begin of Section 44  
#declare AtomsGroup_44 = union {
  sphere { <-0.0210, -0.0083, -0.0089>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3636, -0.0764, -0.0004>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1460, -0.2085, 1.1452>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.8098, 3.0842, 2.0066>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8838, -0.0116, -0.9640>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5805, 0.0875, -0.9420>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5926, -0.0519, 0.9234>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6852, -0.2999, 2.1338>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2322, -0.3087, 1.0844>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.4747, 1.7570, 1.5199>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_44 = union {
  cylinder { <-0.0210, -0.0083, -0.0089>, <1.3636, -0.0764, -0.0004>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5805, 0.0875, -0.9420>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5926, -0.0519, 0.9234>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <2.1460, -0.2085, 1.1452>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <1.8838, -0.0116, -0.9640>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <1.6852, -0.2999, 2.1338>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <3.2322, -0.3087, 1.0844>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.8098, 3.0842, 2.0066>, <2.4747, 1.7570, 1.5199>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[44] = union {
    object {AtomsGroup_44}
    object {BondsGroup_44}
}
// End of Section 44
        //Begin of Section 45  
#declare AtomsGroup_45 = union {
  sphere { <-0.0210, -0.0083, -0.0089>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3636, -0.0764, -0.0004>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1460, -0.2085, 1.1452>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.8098, 3.0842, 2.0066>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8838, -0.0116, -0.9640>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5805, 0.0875, -0.9420>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5926, -0.0519, 0.9234>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6852, -0.2999, 2.1338>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2322, -0.3087, 1.0844>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.4747, 1.7570, 1.5199>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_45 = union {
  cylinder { <-0.0210, -0.0083, -0.0089>, <1.3636, -0.0764, -0.0004>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5805, 0.0875, -0.9420>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5926, -0.0519, 0.9234>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <2.1460, -0.2085, 1.1452>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <1.8838, -0.0116, -0.9640>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <1.6852, -0.2999, 2.1338>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <3.2322, -0.3087, 1.0844>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.8098, 3.0842, 2.0066>, <2.4747, 1.7570, 1.5199>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[45] = union {
    object {AtomsGroup_45}
    object {BondsGroup_45}
}
// End of Section 45
        //Begin of Section 46  
#declare AtomsGroup_46 = union {
  sphere { <-0.0210, -0.0083, -0.0089>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3636, -0.0764, -0.0004>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1460, -0.2085, 1.1452>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.9700, 3.3540, 2.1496>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8838, -0.0116, -0.9640>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5805, 0.0875, -0.9420>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5926, -0.0519, 0.9234>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6852, -0.2999, 2.1338>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2322, -0.3087, 1.0844>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.6349, 2.0268, 1.6629>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_46 = union {
  cylinder { <-0.0210, -0.0083, -0.0089>, <1.3636, -0.0764, -0.0004>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5805, 0.0875, -0.9420>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5926, -0.0519, 0.9234>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <2.1460, -0.2085, 1.1452>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <1.8838, -0.0116, -0.9640>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <1.6852, -0.2999, 2.1338>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <3.2322, -0.3087, 1.0844>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.9700, 3.3540, 2.1496>, <2.6349, 2.0268, 1.6629>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[46] = union {
    object {AtomsGroup_46}
    object {BondsGroup_46}
}
// End of Section 46
        //Begin of Section 47  
#declare AtomsGroup_47 = union {
  sphere { <-0.0210, -0.0083, -0.0089>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3636, -0.0764, -0.0004>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1460, -0.2085, 1.1452>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.1302, 3.6237, 2.2927>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8838, -0.0116, -0.9640>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5805, 0.0875, -0.9420>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5926, -0.0519, 0.9234>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6852, -0.2999, 2.1338>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2322, -0.3087, 1.0844>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.7951, 2.2965, 1.8060>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_47 = union {
  cylinder { <-0.0210, -0.0083, -0.0089>, <1.3636, -0.0764, -0.0004>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5805, 0.0875, -0.9420>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5926, -0.0519, 0.9234>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <2.1460, -0.2085, 1.1452>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <1.8838, -0.0116, -0.9640>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <1.6852, -0.2999, 2.1338>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <3.2322, -0.3087, 1.0844>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <3.1302, 3.6237, 2.2927>, <2.7951, 2.2965, 1.8060>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[47] = union {
    object {AtomsGroup_47}
    object {BondsGroup_47}
}
// End of Section 47
        //Begin of Section 48  
#declare AtomsGroup_48 = union {
  sphere { <-0.0210, -0.0083, -0.0089>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3636, -0.0764, -0.0004>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1460, -0.2085, 1.1452>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2904, 3.8935, 2.4357>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8838, -0.0116, -0.9640>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5805, 0.0875, -0.9420>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5926, -0.0519, 0.9234>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6852, -0.2999, 2.1338>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2322, -0.3087, 1.0844>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.9553, 2.5663, 1.9491>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_48 = union {
  cylinder { <-0.0210, -0.0083, -0.0089>, <1.3636, -0.0764, -0.0004>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5805, 0.0875, -0.9420>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5926, -0.0519, 0.9234>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <2.1460, -0.2085, 1.1452>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <1.8838, -0.0116, -0.9640>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <1.6852, -0.2999, 2.1338>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <3.2322, -0.3087, 1.0844>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <3.2904, 3.8935, 2.4357>, <2.9553, 2.5663, 1.9491>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[48] = union {
    object {AtomsGroup_48}
    object {BondsGroup_48}
}
// End of Section 48
        //Begin of Section 49  
#declare AtomsGroup_49 = union {
  sphere { <-0.0210, -0.0083, -0.0089>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3636, -0.0764, -0.0004>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1460, -0.2085, 1.1452>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.4506, 4.1633, 2.5788>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8838, -0.0116, -0.9640>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5805, 0.0875, -0.9420>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5926, -0.0519, 0.9234>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6852, -0.2999, 2.1338>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2322, -0.3087, 1.0844>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.1155, 2.8361, 2.0921>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_49 = union {
  cylinder { <-0.0210, -0.0083, -0.0089>, <1.3636, -0.0764, -0.0004>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5805, 0.0875, -0.9420>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5926, -0.0519, 0.9234>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <2.1460, -0.2085, 1.1452>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <1.8838, -0.0116, -0.9640>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <1.6852, -0.2999, 2.1338>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <3.2322, -0.3087, 1.0844>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <3.4506, 4.1633, 2.5788>, <3.1155, 2.8361, 2.0921>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[49] = union {
    object {AtomsGroup_49}
    object {BondsGroup_49}
}
// End of Section 49
        //Begin of Section 50  
#declare AtomsGroup_50 = union {
  sphere { <-0.0210, -0.0083, -0.0089>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3636, -0.0764, -0.0004>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1460, -0.2085, 1.1452>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.6108, 4.4331, 2.7218>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8838, -0.0116, -0.9640>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5805, 0.0875, -0.9420>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5926, -0.0519, 0.9234>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6852, -0.2999, 2.1338>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2322, -0.3087, 1.0844>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2757, 3.1059, 2.2352>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_50 = union {
  cylinder { <-0.0210, -0.0083, -0.0089>, <1.3636, -0.0764, -0.0004>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5805, 0.0875, -0.9420>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5926, -0.0519, 0.9234>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <2.1460, -0.2085, 1.1452>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <1.8838, -0.0116, -0.9640>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <1.6852, -0.2999, 2.1338>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <3.2322, -0.3087, 1.0844>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <3.6108, 4.4331, 2.7218>, <3.2757, 3.1059, 2.2352>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[50] = union {
    object {AtomsGroup_50}
    object {BondsGroup_50}
}
// End of Section 50
        //Begin of Section 51  
#declare AtomsGroup_51 = union {
  sphere { <-0.0210, -0.0083, -0.0089>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3636, -0.0764, -0.0004>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1460, -0.2085, 1.1452>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.7710, 4.7028, 2.8649>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8838, -0.0116, -0.9640>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5805, 0.0875, -0.9420>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5926, -0.0519, 0.9234>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6852, -0.2999, 2.1338>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2322, -0.3087, 1.0844>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.4359, 3.3756, 2.3782>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_51 = union {
  cylinder { <-0.0210, -0.0083, -0.0089>, <1.3636, -0.0764, -0.0004>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5805, 0.0875, -0.9420>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5926, -0.0519, 0.9234>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <2.1460, -0.2085, 1.1452>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <1.8838, -0.0116, -0.9640>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <1.6852, -0.2999, 2.1338>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <3.2322, -0.3087, 1.0844>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <3.7710, 4.7028, 2.8649>, <3.4359, 3.3756, 2.3782>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[51] = union {
    object {AtomsGroup_51}
    object {BondsGroup_51}
}
// End of Section 51
        //Begin of Section 52  
#declare AtomsGroup_52 = union {
  sphere { <-0.0210, -0.0083, -0.0089>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3636, -0.0764, -0.0004>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1460, -0.2085, 1.1452>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.9312, 4.9726, 3.0080>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8838, -0.0116, -0.9640>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5805, 0.0875, -0.9420>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5926, -0.0519, 0.9234>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6852, -0.2999, 2.1338>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2322, -0.3087, 1.0844>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.5961, 3.6454, 2.5213>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_52 = union {
  cylinder { <-0.0210, -0.0083, -0.0089>, <1.3636, -0.0764, -0.0004>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5805, 0.0875, -0.9420>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5926, -0.0519, 0.9234>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <2.1460, -0.2085, 1.1452>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <1.8838, -0.0116, -0.9640>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <1.6852, -0.2999, 2.1338>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <3.2322, -0.3087, 1.0844>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <3.9312, 4.9726, 3.0080>, <3.5961, 3.6454, 2.5213>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[52] = union {
    object {AtomsGroup_52}
    object {BondsGroup_52}
}
// End of Section 52
        //Begin of Section 53  
#declare AtomsGroup_53 = union {
  sphere { <-0.0210, -0.0083, -0.0089>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3636, -0.0764, -0.0004>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1460, -0.2085, 1.1452>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <4.0914, 5.2424, 3.1510>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8838, -0.0116, -0.9640>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5805, 0.0875, -0.9420>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5926, -0.0519, 0.9234>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6852, -0.2999, 2.1338>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2322, -0.3087, 1.0844>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.7563, 3.9152, 2.6643>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_53 = union {
  cylinder { <-0.0210, -0.0083, -0.0089>, <1.3636, -0.0764, -0.0004>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5805, 0.0875, -0.9420>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5926, -0.0519, 0.9234>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <2.1460, -0.2085, 1.1452>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <1.8838, -0.0116, -0.9640>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <1.6852, -0.2999, 2.1338>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <3.2322, -0.3087, 1.0844>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <4.0914, 5.2424, 3.1510>, <3.7563, 3.9152, 2.6643>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[53] = union {
    object {AtomsGroup_53}
    object {BondsGroup_53}
}
// End of Section 53
        //Begin of Section 54  
#declare AtomsGroup_54 = union {
  sphere { <-0.0210, -0.0083, -0.0089>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3636, -0.0764, -0.0004>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1460, -0.2085, 1.1452>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <4.2517, 5.5121, 3.2941>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8838, -0.0116, -0.9640>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5805, 0.0875, -0.9420>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5926, -0.0519, 0.9234>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6852, -0.2999, 2.1338>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2322, -0.3087, 1.0844>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.9165, 4.1849, 2.8074>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_54 = union {
  cylinder { <-0.0210, -0.0083, -0.0089>, <1.3636, -0.0764, -0.0004>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5805, 0.0875, -0.9420>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5926, -0.0519, 0.9234>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <2.1460, -0.2085, 1.1452>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <1.8838, -0.0116, -0.9640>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <1.6852, -0.2999, 2.1338>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <3.2322, -0.3087, 1.0844>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <4.2517, 5.5121, 3.2941>, <3.9165, 4.1849, 2.8074>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[54] = union {
    object {AtomsGroup_54}
    object {BondsGroup_54}
}
// End of Section 54
        //Begin of Section 55  
#declare AtomsGroup_55 = union {
  sphere { <-0.0210, -0.0083, -0.0089>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3636, -0.0764, -0.0004>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1460, -0.2085, 1.1452>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <4.4119, 5.7819, 3.4371>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8838, -0.0116, -0.9640>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5805, 0.0875, -0.9420>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5926, -0.0519, 0.9234>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6852, -0.2999, 2.1338>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2322, -0.3087, 1.0844>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <4.0767, 4.4547, 2.9504>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_55 = union {
  cylinder { <-0.0210, -0.0083, -0.0089>, <1.3636, -0.0764, -0.0004>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5805, 0.0875, -0.9420>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5926, -0.0519, 0.9234>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <2.1460, -0.2085, 1.1452>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <1.8838, -0.0116, -0.9640>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <1.6852, -0.2999, 2.1338>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <3.2322, -0.3087, 1.0844>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <4.4119, 5.7819, 3.4371>, <4.0767, 4.4547, 2.9504>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[55] = union {
    object {AtomsGroup_55}
    object {BondsGroup_55}
}
// End of Section 55
        //Begin of Section 56  
#declare AtomsGroup_56 = union {
  sphere { <-0.0210, -0.0083, -0.0089>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3636, -0.0764, -0.0004>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1460, -0.2085, 1.1452>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <4.5721, 6.0517, 3.5802>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8838, -0.0116, -0.9640>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5805, 0.0875, -0.9420>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5926, -0.0519, 0.9234>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6852, -0.2999, 2.1338>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2322, -0.3087, 1.0844>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <4.2369, 4.7245, 3.0935>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_56 = union {
  cylinder { <-0.0210, -0.0083, -0.0089>, <1.3636, -0.0764, -0.0004>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5805, 0.0875, -0.9420>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5926, -0.0519, 0.9234>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <2.1460, -0.2085, 1.1452>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <1.8838, -0.0116, -0.9640>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <1.6852, -0.2999, 2.1338>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <3.2322, -0.3087, 1.0844>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <4.5721, 6.0517, 3.5802>, <4.2369, 4.7245, 3.0935>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[56] = union {
    object {AtomsGroup_56}
    object {BondsGroup_56}
}
// End of Section 56
        //Begin of Section 57  
#declare AtomsGroup_57 = union {
  sphere { <-0.0210, -0.0083, -0.0089>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3636, -0.0764, -0.0004>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1460, -0.2085, 1.1452>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <4.7323, 6.3215, 3.7232>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8838, -0.0116, -0.9640>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5805, 0.0875, -0.9420>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5926, -0.0519, 0.9234>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6852, -0.2999, 2.1338>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2322, -0.3087, 1.0844>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <4.3971, 4.9943, 3.2365>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_57 = union {
  cylinder { <-0.0210, -0.0083, -0.0089>, <1.3636, -0.0764, -0.0004>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5805, 0.0875, -0.9420>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5926, -0.0519, 0.9234>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <2.1460, -0.2085, 1.1452>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <1.8838, -0.0116, -0.9640>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <1.6852, -0.2999, 2.1338>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <3.2322, -0.3087, 1.0844>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <4.7323, 6.3215, 3.7232>, <4.3971, 4.9943, 3.2365>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[57] = union {
    object {AtomsGroup_57}
    object {BondsGroup_57}
}
// End of Section 57
        //Begin of Section 58  
#declare AtomsGroup_58 = union {
  sphere { <-0.0210, -0.0083, -0.0089>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3636, -0.0764, -0.0004>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1460, -0.2085, 1.1452>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <4.8925, 6.5912, 3.8663>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8838, -0.0116, -0.9640>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5805, 0.0875, -0.9420>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5926, -0.0519, 0.9234>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6852, -0.2999, 2.1338>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2322, -0.3087, 1.0844>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <4.5573, 5.2640, 3.3796>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_58 = union {
  cylinder { <-0.0210, -0.0083, -0.0089>, <1.3636, -0.0764, -0.0004>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5805, 0.0875, -0.9420>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5926, -0.0519, 0.9234>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <2.1460, -0.2085, 1.1452>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <1.8838, -0.0116, -0.9640>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <1.6852, -0.2999, 2.1338>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <3.2322, -0.3087, 1.0844>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <4.8925, 6.5912, 3.8663>, <4.5573, 5.2640, 3.3796>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[58] = union {
    object {AtomsGroup_58}
    object {BondsGroup_58}
}
// End of Section 58
        //Begin of Section 59  
#declare AtomsGroup_59 = union {
  sphere { <-0.0210, -0.0083, -0.0089>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3636, -0.0764, -0.0004>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1460, -0.2085, 1.1452>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <5.0527, 6.8610, 4.0093>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8838, -0.0116, -0.9640>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5805, 0.0875, -0.9420>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5926, -0.0519, 0.9234>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6852, -0.2999, 2.1338>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2322, -0.3087, 1.0844>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <4.7175, 5.5338, 3.5227>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_59 = union {
  cylinder { <-0.0210, -0.0083, -0.0089>, <1.3636, -0.0764, -0.0004>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5805, 0.0875, -0.9420>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5926, -0.0519, 0.9234>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <2.1460, -0.2085, 1.1452>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <1.8838, -0.0116, -0.9640>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <1.6852, -0.2999, 2.1338>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <3.2322, -0.3087, 1.0844>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <5.0527, 6.8610, 4.0093>, <4.7175, 5.5338, 3.5227>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[59] = union {
    object {AtomsGroup_59}
    object {BondsGroup_59}
}
// End of Section 59
        //Begin of Section 60  
#declare AtomsGroup_60 = union {
  sphere { <-0.0210, -0.0083, -0.0089>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3636, -0.0764, -0.0004>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1460, -0.2085, 1.1452>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <5.2129, 7.1308, 4.1524>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8838, -0.0116, -0.9640>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5805, 0.0875, -0.9420>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5926, -0.0519, 0.9234>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6852, -0.2999, 2.1338>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2322, -0.3087, 1.0844>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <4.8777, 5.8036, 3.6657>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_60 = union {
  cylinder { <-0.0210, -0.0083, -0.0089>, <1.3636, -0.0764, -0.0004>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5805, 0.0875, -0.9420>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5926, -0.0519, 0.9234>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <2.1460, -0.2085, 1.1452>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <1.8838, -0.0116, -0.9640>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <1.6852, -0.2999, 2.1338>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <3.2322, -0.3087, 1.0844>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <5.2129, 7.1308, 4.1524>, <4.8777, 5.8036, 3.6657>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[60] = union {
    object {AtomsGroup_60}
    object {BondsGroup_60}
}
// End of Section 60
        //Begin of Section 61  
#declare AtomsGroup_61 = union {
  sphere { <-0.0210, -0.0083, -0.0089>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3636, -0.0764, -0.0004>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1460, -0.2085, 1.1452>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <5.3731, 7.4005, 4.2955>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8838, -0.0116, -0.9640>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5805, 0.0875, -0.9420>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5926, -0.0519, 0.9234>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6852, -0.2999, 2.1338>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2322, -0.3087, 1.0844>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <5.0379, 6.0733, 3.8088>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_61 = union {
  cylinder { <-0.0210, -0.0083, -0.0089>, <1.3636, -0.0764, -0.0004>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5805, 0.0875, -0.9420>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5926, -0.0519, 0.9234>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <2.1460, -0.2085, 1.1452>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <1.8838, -0.0116, -0.9640>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <1.6852, -0.2999, 2.1338>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <3.2322, -0.3087, 1.0844>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <5.3731, 7.4005, 4.2955>, <5.0379, 6.0733, 3.8088>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[61] = union {
    object {AtomsGroup_61}
    object {BondsGroup_61}
}
// End of Section 61
        //Begin of Section 62  
#declare AtomsGroup_62 = union {
  sphere { <-0.0210, -0.0083, -0.0089>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3636, -0.0764, -0.0004>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1460, -0.2085, 1.1452>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <5.5333, 7.6703, 4.4385>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8838, -0.0116, -0.9640>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5805, 0.0875, -0.9420>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5926, -0.0519, 0.9234>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6852, -0.2999, 2.1338>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2322, -0.3087, 1.0844>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <5.1981, 6.3431, 3.9518>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_62 = union {
  cylinder { <-0.0210, -0.0083, -0.0089>, <1.3636, -0.0764, -0.0004>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5805, 0.0875, -0.9420>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5926, -0.0519, 0.9234>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <2.1460, -0.2085, 1.1452>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <1.8838, -0.0116, -0.9640>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <1.6852, -0.2999, 2.1338>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <3.2322, -0.3087, 1.0844>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <5.5333, 7.6703, 4.4385>, <5.1981, 6.3431, 3.9518>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[62] = union {
    object {AtomsGroup_62}
    object {BondsGroup_62}
}
// End of Section 62
        //Begin of Section 63  
#declare AtomsGroup_63 = union {
  sphere { <-0.0210, -0.0083, -0.0089>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3636, -0.0764, -0.0004>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1460, -0.2085, 1.1452>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <5.6935, 7.9401, 4.5816>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8838, -0.0116, -0.9640>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5805, 0.0875, -0.9420>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5926, -0.0519, 0.9234>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6852, -0.2999, 2.1338>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2322, -0.3087, 1.0844>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <5.3583, 6.6129, 4.0949>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_63 = union {
  cylinder { <-0.0210, -0.0083, -0.0089>, <1.3636, -0.0764, -0.0004>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5805, 0.0875, -0.9420>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5926, -0.0519, 0.9234>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <2.1460, -0.2085, 1.1452>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <1.8838, -0.0116, -0.9640>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <1.6852, -0.2999, 2.1338>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <3.2322, -0.3087, 1.0844>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <5.6935, 7.9401, 4.5816>, <5.3583, 6.6129, 4.0949>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[63] = union {
    object {AtomsGroup_63}
    object {BondsGroup_63}
}
// End of Section 63
        //Begin of Section 64  
#declare AtomsGroup_64 = union {
  sphere { <-0.0210, -0.0083, -0.0089>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3636, -0.0764, -0.0004>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1460, -0.2085, 1.1452>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <5.8537, 8.2098, 4.7246>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8838, -0.0116, -0.9640>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5805, 0.0875, -0.9420>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5926, -0.0519, 0.9234>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6852, -0.2999, 2.1338>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2322, -0.3087, 1.0844>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <5.5186, 6.8826, 4.2379>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_64 = union {
  cylinder { <-0.0210, -0.0083, -0.0089>, <1.3636, -0.0764, -0.0004>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5805, 0.0875, -0.9420>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5926, -0.0519, 0.9234>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <2.1460, -0.2085, 1.1452>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <1.8838, -0.0116, -0.9640>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <1.6852, -0.2999, 2.1338>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <3.2322, -0.3087, 1.0844>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <5.8537, 8.2098, 4.7246>, <5.5186, 6.8826, 4.2379>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[64] = union {
    object {AtomsGroup_64}
    object {BondsGroup_64}
}
// End of Section 64
        //Begin of Section 65  
#declare AtomsGroup_65 = union {
  sphere { <-0.0210, -0.0083, -0.0089>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3636, -0.0764, -0.0004>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1460, -0.2085, 1.1452>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <6.0139, 8.4796, 4.8677>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8838, -0.0116, -0.9640>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5805, 0.0875, -0.9420>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5926, -0.0519, 0.9234>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6852, -0.2999, 2.1338>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2322, -0.3087, 1.0844>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <5.6788, 7.1524, 4.3810>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_65 = union {
  cylinder { <-0.0210, -0.0083, -0.0089>, <1.3636, -0.0764, -0.0004>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5805, 0.0875, -0.9420>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5926, -0.0519, 0.9234>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <2.1460, -0.2085, 1.1452>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <1.8838, -0.0116, -0.9640>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <1.6852, -0.2999, 2.1338>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <3.2322, -0.3087, 1.0844>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <6.0139, 8.4796, 4.8677>, <5.6788, 7.1524, 4.3810>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[65] = union {
    object {AtomsGroup_65}
    object {BondsGroup_65}
}
// End of Section 65
        //Begin of Section 66  
#declare AtomsGroup_66 = union {
  sphere { <-0.0210, -0.0083, -0.0089>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3636, -0.0764, -0.0004>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1460, -0.2085, 1.1452>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <6.1741, 8.7494, 5.0107>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8838, -0.0116, -0.9640>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5805, 0.0875, -0.9420>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5926, -0.0519, 0.9234>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6852, -0.2999, 2.1338>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2322, -0.3087, 1.0844>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <5.8390, 7.4222, 4.5240>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_66 = union {
  cylinder { <-0.0210, -0.0083, -0.0089>, <1.3636, -0.0764, -0.0004>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5805, 0.0875, -0.9420>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5926, -0.0519, 0.9234>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <2.1460, -0.2085, 1.1452>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <1.8838, -0.0116, -0.9640>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <1.6852, -0.2999, 2.1338>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <3.2322, -0.3087, 1.0844>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <6.1741, 8.7494, 5.0107>, <5.8390, 7.4222, 4.5240>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[66] = union {
    object {AtomsGroup_66}
    object {BondsGroup_66}
}
// End of Section 66
        //Begin of Section 67  
#declare AtomsGroup_67 = union {
  sphere { <-0.0210, -0.0083, -0.0089>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3636, -0.0764, -0.0004>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1460, -0.2085, 1.1452>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <6.3343, 9.0192, 5.1538>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8838, -0.0116, -0.9640>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5805, 0.0875, -0.9420>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5926, -0.0519, 0.9234>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6852, -0.2999, 2.1338>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2322, -0.3087, 1.0844>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <5.9992, 7.6920, 4.6671>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_67 = union {
  cylinder { <-0.0210, -0.0083, -0.0089>, <1.3636, -0.0764, -0.0004>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5805, 0.0875, -0.9420>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5926, -0.0519, 0.9234>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <2.1460, -0.2085, 1.1452>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <1.8838, -0.0116, -0.9640>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <1.6852, -0.2999, 2.1338>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <3.2322, -0.3087, 1.0844>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <6.3343, 9.0192, 5.1538>, <5.9992, 7.6920, 4.6671>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[67] = union {
    object {AtomsGroup_67}
    object {BondsGroup_67}
}
// End of Section 67
        //Begin of Section 68  
#declare AtomsGroup_68 = union {
  sphere { <-0.0210, -0.0083, -0.0089>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3636, -0.0764, -0.0004>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1460, -0.2085, 1.1452>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <6.4945, 9.2889, 5.2968>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8838, -0.0116, -0.9640>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5805, 0.0875, -0.9420>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5926, -0.0519, 0.9234>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6852, -0.2999, 2.1338>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2322, -0.3087, 1.0844>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <6.1594, 7.9617, 4.8102>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_68 = union {
  cylinder { <-0.0210, -0.0083, -0.0089>, <1.3636, -0.0764, -0.0004>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5805, 0.0875, -0.9420>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5926, -0.0519, 0.9234>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <2.1460, -0.2085, 1.1452>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <1.8838, -0.0116, -0.9640>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <1.6852, -0.2999, 2.1338>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <3.2322, -0.3087, 1.0844>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <6.4945, 9.2889, 5.2968>, <6.1594, 7.9617, 4.8102>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[68] = union {
    object {AtomsGroup_68}
    object {BondsGroup_68}
}
// End of Section 68
        //Begin of Section 69  
#declare AtomsGroup_69 = union {
  sphere { <-0.0210, -0.0083, -0.0089>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3636, -0.0764, -0.0004>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1460, -0.2085, 1.1452>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <6.6547, 9.5587, 5.4399>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8838, -0.0116, -0.9640>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5805, 0.0875, -0.9420>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5926, -0.0519, 0.9234>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6852, -0.2999, 2.1338>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2322, -0.3087, 1.0844>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <6.3196, 8.2315, 4.9532>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_69 = union {
  cylinder { <-0.0210, -0.0083, -0.0089>, <1.3636, -0.0764, -0.0004>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5805, 0.0875, -0.9420>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5926, -0.0519, 0.9234>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <2.1460, -0.2085, 1.1452>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <1.8838, -0.0116, -0.9640>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <1.6852, -0.2999, 2.1338>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <3.2322, -0.3087, 1.0844>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <6.6547, 9.5587, 5.4399>, <6.3196, 8.2315, 4.9532>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[69] = union {
    object {AtomsGroup_69}
    object {BondsGroup_69}
}
// End of Section 69
        //Begin of Section 70  
#declare AtomsGroup_70 = union {
  sphere { <-0.0210, -0.0083, -0.0089>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3636, -0.0764, -0.0004>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1460, -0.2085, 1.1452>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <6.8149, 9.8285, 5.5829>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8838, -0.0116, -0.9640>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5805, 0.0875, -0.9420>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5926, -0.0519, 0.9234>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6852, -0.2999, 2.1338>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2322, -0.3087, 1.0844>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <6.4798, 8.5013, 5.0963>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_70 = union {
  cylinder { <-0.0210, -0.0083, -0.0089>, <1.3636, -0.0764, -0.0004>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5805, 0.0875, -0.9420>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5926, -0.0519, 0.9234>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <2.1460, -0.2085, 1.1452>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <1.8838, -0.0116, -0.9640>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <1.6852, -0.2999, 2.1338>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <3.2322, -0.3087, 1.0844>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <6.8149, 9.8285, 5.5829>, <6.4798, 8.5013, 5.0963>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[70] = union {
    object {AtomsGroup_70}
    object {BondsGroup_70}
}
// End of Section 70
        //Begin of Section 71  
#declare AtomsGroup_71 = union {
  sphere { <-0.0210, -0.0083, -0.0089>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3636, -0.0764, -0.0004>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1460, -0.2085, 1.1452>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <6.9751, 10.0982, 5.7260>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8838, -0.0116, -0.9640>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5805, 0.0875, -0.9420>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5926, -0.0519, 0.9234>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6852, -0.2999, 2.1338>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2322, -0.3087, 1.0844>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <6.6400, 8.7710, 5.2393>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_71 = union {
  cylinder { <-0.0210, -0.0083, -0.0089>, <1.3636, -0.0764, -0.0004>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5805, 0.0875, -0.9420>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5926, -0.0519, 0.9234>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <2.1460, -0.2085, 1.1452>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <1.8838, -0.0116, -0.9640>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <1.6852, -0.2999, 2.1338>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <3.2322, -0.3087, 1.0844>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <6.9751, 10.0982, 5.7260>, <6.6400, 8.7710, 5.2393>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[71] = union {
    object {AtomsGroup_71}
    object {BondsGroup_71}
}
// End of Section 71
        //Begin of Section 72  
#declare AtomsGroup_72 = union {
  sphere { <-0.0210, -0.0083, -0.0089>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3636, -0.0764, -0.0004>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1460, -0.2085, 1.1452>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <7.1353, 10.3680, 5.8691>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8838, -0.0116, -0.9640>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5805, 0.0875, -0.9420>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5926, -0.0519, 0.9234>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6852, -0.2999, 2.1338>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2322, -0.3087, 1.0844>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <6.8002, 9.0408, 5.3824>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_72 = union {
  cylinder { <-0.0210, -0.0083, -0.0089>, <1.3636, -0.0764, -0.0004>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5805, 0.0875, -0.9420>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5926, -0.0519, 0.9234>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <2.1460, -0.2085, 1.1452>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <1.8838, -0.0116, -0.9640>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <1.6852, -0.2999, 2.1338>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <3.2322, -0.3087, 1.0844>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <7.1353, 10.3680, 5.8691>, <6.8002, 9.0408, 5.3824>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[72] = union {
    object {AtomsGroup_72}
    object {BondsGroup_72}
}
// End of Section 72
        //Begin of Section 73  
#declare AtomsGroup_73 = union {
  sphere { <-0.0210, -0.0083, -0.0089>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3636, -0.0764, -0.0004>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1460, -0.2085, 1.1452>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <7.2955, 10.6378, 6.0121>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8838, -0.0116, -0.9640>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5805, 0.0875, -0.9420>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5926, -0.0519, 0.9234>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6852, -0.2999, 2.1338>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2322, -0.3087, 1.0844>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <6.9604, 9.3106, 5.5254>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_73 = union {
  cylinder { <-0.0210, -0.0083, -0.0089>, <1.3636, -0.0764, -0.0004>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5805, 0.0875, -0.9420>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5926, -0.0519, 0.9234>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <2.1460, -0.2085, 1.1452>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <1.8838, -0.0116, -0.9640>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <1.6852, -0.2999, 2.1338>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <3.2322, -0.3087, 1.0844>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <7.2955, 10.6378, 6.0121>, <6.9604, 9.3106, 5.5254>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[73] = union {
    object {AtomsGroup_73}
    object {BondsGroup_73}
}
// End of Section 73
        //Begin of Section 74  
#declare AtomsGroup_74 = union {
  sphere { <-0.0210, -0.0083, -0.0089>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3636, -0.0764, -0.0004>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1460, -0.2085, 1.1452>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <7.4557, 10.9075, 6.1552>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8838, -0.0116, -0.9640>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5805, 0.0875, -0.9420>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5926, -0.0519, 0.9234>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6852, -0.2999, 2.1338>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2322, -0.3087, 1.0844>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <7.1206, 9.5803, 5.6685>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_74 = union {
  cylinder { <-0.0210, -0.0083, -0.0089>, <1.3636, -0.0764, -0.0004>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5805, 0.0875, -0.9420>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0210, -0.0083, -0.0089>, <-0.5926, -0.0519, 0.9234>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <2.1460, -0.2085, 1.1452>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3636, -0.0764, -0.0004>, <1.8838, -0.0116, -0.9640>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <1.6852, -0.2999, 2.1338>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1460, -0.2085, 1.1452>, <3.2322, -0.3087, 1.0844>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <7.4557, 10.9075, 6.1552>, <7.1206, 9.5803, 5.6685>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[74] = union {
    object {AtomsGroup_74}
    object {BondsGroup_74}
}
// End of Section 74
        //Begin of Section 75  
#declare AtomsGroup_75 = union {
  sphere { <-0.0203, -0.0176, -0.0095>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3625, -0.0833, -0.0049>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1456, -0.1920, 1.1473>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <7.1796, 10.3693, 5.5187>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <7.8205, 12.6204, 6.1120>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8861, -0.0194, -0.9661>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5814, 0.1095, -0.9387>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5892, -0.0675, 0.9239>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6846, -0.2931, 2.1339>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2288, -0.3144, 1.0857>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_75 = union {
  cylinder { <-0.0203, -0.0176, -0.0095>, <1.3625, -0.0833, -0.0049>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0203, -0.0176, -0.0095>, <-0.5814, 0.1095, -0.9387>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0203, -0.0176, -0.0095>, <-0.5892, -0.0675, 0.9239>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0833, -0.0049>, <2.1456, -0.1920, 1.1473>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0833, -0.0049>, <1.8861, -0.0194, -0.9661>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1456, -0.1920, 1.1473>, <1.6846, -0.2931, 2.1339>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1456, -0.1920, 1.1473>, <3.2288, -0.3144, 1.0857>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <7.1796, 10.3693, 5.5187>, <7.8205, 12.6204, 6.1120>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[75] = union {
    object {AtomsGroup_75}
    object {BondsGroup_75}
}
// End of Section 75
        //Begin of Section 76  
#declare AtomsGroup_76 = union {
  sphere { <-0.0203, -0.0176, -0.0095>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3625, -0.0833, -0.0049>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1456, -0.1920, 1.1473>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <7.0194, 10.0995, 5.3756>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <7.6603, 12.3506, 5.9690>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8861, -0.0194, -0.9661>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5814, 0.1095, -0.9387>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5892, -0.0675, 0.9239>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6846, -0.2931, 2.1339>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2288, -0.3144, 1.0857>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_76 = union {
  cylinder { <-0.0203, -0.0176, -0.0095>, <1.3625, -0.0833, -0.0049>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0203, -0.0176, -0.0095>, <-0.5814, 0.1095, -0.9387>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0203, -0.0176, -0.0095>, <-0.5892, -0.0675, 0.9239>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0833, -0.0049>, <2.1456, -0.1920, 1.1473>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0833, -0.0049>, <1.8861, -0.0194, -0.9661>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1456, -0.1920, 1.1473>, <1.6846, -0.2931, 2.1339>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1456, -0.1920, 1.1473>, <3.2288, -0.3144, 1.0857>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <7.0194, 10.0995, 5.3756>, <7.6603, 12.3506, 5.9690>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[76] = union {
    object {AtomsGroup_76}
    object {BondsGroup_76}
}
// End of Section 76
        //Begin of Section 77  
#declare AtomsGroup_77 = union {
  sphere { <-0.0203, -0.0176, -0.0095>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3625, -0.0833, -0.0049>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1456, -0.1920, 1.1473>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <6.8592, 9.8298, 5.2326>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <7.5001, 12.0809, 5.8259>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8861, -0.0194, -0.9661>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5814, 0.1095, -0.9387>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5892, -0.0675, 0.9239>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6846, -0.2931, 2.1339>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2288, -0.3144, 1.0857>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_77 = union {
  cylinder { <-0.0203, -0.0176, -0.0095>, <1.3625, -0.0833, -0.0049>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0203, -0.0176, -0.0095>, <-0.5814, 0.1095, -0.9387>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0203, -0.0176, -0.0095>, <-0.5892, -0.0675, 0.9239>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0833, -0.0049>, <2.1456, -0.1920, 1.1473>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0833, -0.0049>, <1.8861, -0.0194, -0.9661>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1456, -0.1920, 1.1473>, <1.6846, -0.2931, 2.1339>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1456, -0.1920, 1.1473>, <3.2288, -0.3144, 1.0857>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <6.8592, 9.8298, 5.2326>, <7.5001, 12.0809, 5.8259>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[77] = union {
    object {AtomsGroup_77}
    object {BondsGroup_77}
}
// End of Section 77
        //Begin of Section 78  
#declare AtomsGroup_78 = union {
  sphere { <-0.0203, -0.0176, -0.0095>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3625, -0.0833, -0.0049>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1456, -0.1920, 1.1473>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <6.6990, 9.5600, 5.0895>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <7.3399, 11.8111, 5.6829>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8861, -0.0194, -0.9661>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5814, 0.1095, -0.9387>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5892, -0.0675, 0.9239>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6846, -0.2931, 2.1339>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2288, -0.3144, 1.0857>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_78 = union {
  cylinder { <-0.0203, -0.0176, -0.0095>, <1.3625, -0.0833, -0.0049>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0203, -0.0176, -0.0095>, <-0.5814, 0.1095, -0.9387>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0203, -0.0176, -0.0095>, <-0.5892, -0.0675, 0.9239>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0833, -0.0049>, <2.1456, -0.1920, 1.1473>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0833, -0.0049>, <1.8861, -0.0194, -0.9661>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1456, -0.1920, 1.1473>, <1.6846, -0.2931, 2.1339>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1456, -0.1920, 1.1473>, <3.2288, -0.3144, 1.0857>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <6.6990, 9.5600, 5.0895>, <7.3399, 11.8111, 5.6829>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[78] = union {
    object {AtomsGroup_78}
    object {BondsGroup_78}
}
// End of Section 78
        //Begin of Section 79  
#declare AtomsGroup_79 = union {
  sphere { <-0.0203, -0.0176, -0.0095>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3625, -0.0833, -0.0049>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1456, -0.1920, 1.1473>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <6.5388, 9.2902, 4.9465>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <7.1797, 11.5413, 5.5398>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8861, -0.0194, -0.9661>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5814, 0.1095, -0.9387>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5892, -0.0675, 0.9239>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6846, -0.2931, 2.1339>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2288, -0.3144, 1.0857>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_79 = union {
  cylinder { <-0.0203, -0.0176, -0.0095>, <1.3625, -0.0833, -0.0049>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0203, -0.0176, -0.0095>, <-0.5814, 0.1095, -0.9387>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0203, -0.0176, -0.0095>, <-0.5892, -0.0675, 0.9239>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0833, -0.0049>, <2.1456, -0.1920, 1.1473>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0833, -0.0049>, <1.8861, -0.0194, -0.9661>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1456, -0.1920, 1.1473>, <1.6846, -0.2931, 2.1339>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1456, -0.1920, 1.1473>, <3.2288, -0.3144, 1.0857>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <6.5388, 9.2902, 4.9465>, <7.1797, 11.5413, 5.5398>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[79] = union {
    object {AtomsGroup_79}
    object {BondsGroup_79}
}
// End of Section 79
        //Begin of Section 80  
#declare AtomsGroup_80 = union {
  sphere { <-0.0203, -0.0176, -0.0095>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3625, -0.0833, -0.0049>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1456, -0.1920, 1.1473>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <6.3786, 9.0204, 4.8034>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <7.0195, 11.2716, 5.3968>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8861, -0.0194, -0.9661>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5814, 0.1095, -0.9387>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5892, -0.0675, 0.9239>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6846, -0.2931, 2.1339>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2288, -0.3144, 1.0857>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_80 = union {
  cylinder { <-0.0203, -0.0176, -0.0095>, <1.3625, -0.0833, -0.0049>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0203, -0.0176, -0.0095>, <-0.5814, 0.1095, -0.9387>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0203, -0.0176, -0.0095>, <-0.5892, -0.0675, 0.9239>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0833, -0.0049>, <2.1456, -0.1920, 1.1473>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0833, -0.0049>, <1.8861, -0.0194, -0.9661>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1456, -0.1920, 1.1473>, <1.6846, -0.2931, 2.1339>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1456, -0.1920, 1.1473>, <3.2288, -0.3144, 1.0857>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <6.3786, 9.0204, 4.8034>, <7.0195, 11.2716, 5.3968>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[80] = union {
    object {AtomsGroup_80}
    object {BondsGroup_80}
}
// End of Section 80
        //Begin of Section 81  
#declare AtomsGroup_81 = union {
  sphere { <-0.0203, -0.0176, -0.0095>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3625, -0.0833, -0.0049>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1456, -0.1920, 1.1473>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <6.2184, 8.7507, 4.6604>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <6.8593, 11.0018, 5.2537>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8861, -0.0194, -0.9661>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5814, 0.1095, -0.9387>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5892, -0.0675, 0.9239>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6846, -0.2931, 2.1339>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2288, -0.3144, 1.0857>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_81 = union {
  cylinder { <-0.0203, -0.0176, -0.0095>, <1.3625, -0.0833, -0.0049>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0203, -0.0176, -0.0095>, <-0.5814, 0.1095, -0.9387>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0203, -0.0176, -0.0095>, <-0.5892, -0.0675, 0.9239>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0833, -0.0049>, <2.1456, -0.1920, 1.1473>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0833, -0.0049>, <1.8861, -0.0194, -0.9661>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1456, -0.1920, 1.1473>, <1.6846, -0.2931, 2.1339>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1456, -0.1920, 1.1473>, <3.2288, -0.3144, 1.0857>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <6.2184, 8.7507, 4.6604>, <6.8593, 11.0018, 5.2537>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[81] = union {
    object {AtomsGroup_81}
    object {BondsGroup_81}
}
// End of Section 81
        //Begin of Section 82  
#declare AtomsGroup_82 = union {
  sphere { <-0.0203, -0.0176, -0.0095>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3625, -0.0833, -0.0049>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1456, -0.1920, 1.1473>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <6.0582, 8.4809, 4.5173>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <6.6991, 10.7320, 5.1106>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8861, -0.0194, -0.9661>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5814, 0.1095, -0.9387>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5892, -0.0675, 0.9239>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6846, -0.2931, 2.1339>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2288, -0.3144, 1.0857>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_82 = union {
  cylinder { <-0.0203, -0.0176, -0.0095>, <1.3625, -0.0833, -0.0049>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0203, -0.0176, -0.0095>, <-0.5814, 0.1095, -0.9387>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0203, -0.0176, -0.0095>, <-0.5892, -0.0675, 0.9239>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0833, -0.0049>, <2.1456, -0.1920, 1.1473>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0833, -0.0049>, <1.8861, -0.0194, -0.9661>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1456, -0.1920, 1.1473>, <1.6846, -0.2931, 2.1339>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1456, -0.1920, 1.1473>, <3.2288, -0.3144, 1.0857>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <6.0582, 8.4809, 4.5173>, <6.6991, 10.7320, 5.1106>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[82] = union {
    object {AtomsGroup_82}
    object {BondsGroup_82}
}
// End of Section 82
        //Begin of Section 83  
#declare AtomsGroup_83 = union {
  sphere { <-0.0203, -0.0176, -0.0095>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3625, -0.0833, -0.0049>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1456, -0.1920, 1.1473>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <5.8980, 8.2111, 4.3742>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <6.5389, 10.4622, 4.9676>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8861, -0.0194, -0.9661>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5814, 0.1095, -0.9387>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5892, -0.0675, 0.9239>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6846, -0.2931, 2.1339>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2288, -0.3144, 1.0857>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_83 = union {
  cylinder { <-0.0203, -0.0176, -0.0095>, <1.3625, -0.0833, -0.0049>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0203, -0.0176, -0.0095>, <-0.5814, 0.1095, -0.9387>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0203, -0.0176, -0.0095>, <-0.5892, -0.0675, 0.9239>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0833, -0.0049>, <2.1456, -0.1920, 1.1473>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0833, -0.0049>, <1.8861, -0.0194, -0.9661>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1456, -0.1920, 1.1473>, <1.6846, -0.2931, 2.1339>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1456, -0.1920, 1.1473>, <3.2288, -0.3144, 1.0857>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <5.8980, 8.2111, 4.3742>, <6.5389, 10.4622, 4.9676>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[83] = union {
    object {AtomsGroup_83}
    object {BondsGroup_83}
}
// End of Section 83
        //Begin of Section 84  
#declare AtomsGroup_84 = union {
  sphere { <-0.0203, -0.0176, -0.0095>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3625, -0.0833, -0.0049>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1456, -0.1920, 1.1473>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <5.7378, 7.9414, 4.2312>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <6.3787, 10.1925, 4.8245>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8861, -0.0194, -0.9661>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5814, 0.1095, -0.9387>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5892, -0.0675, 0.9239>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6846, -0.2931, 2.1339>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2288, -0.3144, 1.0857>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_84 = union {
  cylinder { <-0.0203, -0.0176, -0.0095>, <1.3625, -0.0833, -0.0049>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0203, -0.0176, -0.0095>, <-0.5814, 0.1095, -0.9387>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0203, -0.0176, -0.0095>, <-0.5892, -0.0675, 0.9239>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0833, -0.0049>, <2.1456, -0.1920, 1.1473>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0833, -0.0049>, <1.8861, -0.0194, -0.9661>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1456, -0.1920, 1.1473>, <1.6846, -0.2931, 2.1339>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1456, -0.1920, 1.1473>, <3.2288, -0.3144, 1.0857>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <5.7378, 7.9414, 4.2312>, <6.3787, 10.1925, 4.8245>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[84] = union {
    object {AtomsGroup_84}
    object {BondsGroup_84}
}
// End of Section 84
        //Begin of Section 85  
#declare AtomsGroup_85 = union {
  sphere { <-0.0203, -0.0176, -0.0095>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3625, -0.0833, -0.0049>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1456, -0.1920, 1.1473>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <5.5776, 7.6716, 4.0881>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <6.2185, 9.9227, 4.6815>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8861, -0.0194, -0.9661>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5814, 0.1095, -0.9387>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5892, -0.0675, 0.9239>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6846, -0.2931, 2.1339>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2288, -0.3144, 1.0857>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_85 = union {
  cylinder { <-0.0203, -0.0176, -0.0095>, <1.3625, -0.0833, -0.0049>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0203, -0.0176, -0.0095>, <-0.5814, 0.1095, -0.9387>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0203, -0.0176, -0.0095>, <-0.5892, -0.0675, 0.9239>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0833, -0.0049>, <2.1456, -0.1920, 1.1473>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0833, -0.0049>, <1.8861, -0.0194, -0.9661>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1456, -0.1920, 1.1473>, <1.6846, -0.2931, 2.1339>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1456, -0.1920, 1.1473>, <3.2288, -0.3144, 1.0857>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <5.5776, 7.6716, 4.0881>, <6.2185, 9.9227, 4.6815>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[85] = union {
    object {AtomsGroup_85}
    object {BondsGroup_85}
}
// End of Section 85
        //Begin of Section 86  
#declare AtomsGroup_86 = union {
  sphere { <-0.0203, -0.0176, -0.0095>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3625, -0.0833, -0.0049>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1456, -0.1920, 1.1473>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <5.4174, 7.4018, 3.9451>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <6.0583, 9.6529, 4.5384>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8861, -0.0194, -0.9661>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5814, 0.1095, -0.9387>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5892, -0.0675, 0.9239>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6846, -0.2931, 2.1339>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2288, -0.3144, 1.0857>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_86 = union {
  cylinder { <-0.0203, -0.0176, -0.0095>, <1.3625, -0.0833, -0.0049>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0203, -0.0176, -0.0095>, <-0.5814, 0.1095, -0.9387>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0203, -0.0176, -0.0095>, <-0.5892, -0.0675, 0.9239>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0833, -0.0049>, <2.1456, -0.1920, 1.1473>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0833, -0.0049>, <1.8861, -0.0194, -0.9661>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1456, -0.1920, 1.1473>, <1.6846, -0.2931, 2.1339>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1456, -0.1920, 1.1473>, <3.2288, -0.3144, 1.0857>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <5.4174, 7.4018, 3.9451>, <6.0583, 9.6529, 4.5384>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[86] = union {
    object {AtomsGroup_86}
    object {BondsGroup_86}
}
// End of Section 86
        //Begin of Section 87  
#declare AtomsGroup_87 = union {
  sphere { <-0.0203, -0.0176, -0.0095>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3625, -0.0833, -0.0049>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1456, -0.1920, 1.1473>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <5.2572, 7.1321, 3.8020>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <5.8981, 9.3832, 4.3954>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8861, -0.0194, -0.9661>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5814, 0.1095, -0.9387>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5892, -0.0675, 0.9239>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6846, -0.2931, 2.1339>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2288, -0.3144, 1.0857>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_87 = union {
  cylinder { <-0.0203, -0.0176, -0.0095>, <1.3625, -0.0833, -0.0049>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0203, -0.0176, -0.0095>, <-0.5814, 0.1095, -0.9387>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0203, -0.0176, -0.0095>, <-0.5892, -0.0675, 0.9239>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0833, -0.0049>, <2.1456, -0.1920, 1.1473>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0833, -0.0049>, <1.8861, -0.0194, -0.9661>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1456, -0.1920, 1.1473>, <1.6846, -0.2931, 2.1339>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1456, -0.1920, 1.1473>, <3.2288, -0.3144, 1.0857>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <5.2572, 7.1321, 3.8020>, <5.8981, 9.3832, 4.3954>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[87] = union {
    object {AtomsGroup_87}
    object {BondsGroup_87}
}
// End of Section 87
        //Begin of Section 88  
#declare AtomsGroup_88 = union {
  sphere { <-0.0203, -0.0176, -0.0095>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3625, -0.0833, -0.0049>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1456, -0.1920, 1.1473>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <5.0969, 6.8623, 3.6590>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <5.7379, 9.1134, 4.2523>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8861, -0.0194, -0.9661>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5814, 0.1095, -0.9387>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5892, -0.0675, 0.9239>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6846, -0.2931, 2.1339>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2288, -0.3144, 1.0857>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_88 = union {
  cylinder { <-0.0203, -0.0176, -0.0095>, <1.3625, -0.0833, -0.0049>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0203, -0.0176, -0.0095>, <-0.5814, 0.1095, -0.9387>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0203, -0.0176, -0.0095>, <-0.5892, -0.0675, 0.9239>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0833, -0.0049>, <2.1456, -0.1920, 1.1473>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0833, -0.0049>, <1.8861, -0.0194, -0.9661>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1456, -0.1920, 1.1473>, <1.6846, -0.2931, 2.1339>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1456, -0.1920, 1.1473>, <3.2288, -0.3144, 1.0857>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <5.0969, 6.8623, 3.6590>, <5.7379, 9.1134, 4.2523>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[88] = union {
    object {AtomsGroup_88}
    object {BondsGroup_88}
}
// End of Section 88
        //Begin of Section 89  
#declare AtomsGroup_89 = union {
  sphere { <-0.0203, -0.0176, -0.0095>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3625, -0.0833, -0.0049>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1456, -0.1920, 1.1473>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <4.9367, 6.5925, 3.5159>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <5.5777, 8.8436, 4.1093>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8861, -0.0194, -0.9661>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5814, 0.1095, -0.9387>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5892, -0.0675, 0.9239>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6846, -0.2931, 2.1339>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2288, -0.3144, 1.0857>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_89 = union {
  cylinder { <-0.0203, -0.0176, -0.0095>, <1.3625, -0.0833, -0.0049>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0203, -0.0176, -0.0095>, <-0.5814, 0.1095, -0.9387>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0203, -0.0176, -0.0095>, <-0.5892, -0.0675, 0.9239>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0833, -0.0049>, <2.1456, -0.1920, 1.1473>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0833, -0.0049>, <1.8861, -0.0194, -0.9661>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1456, -0.1920, 1.1473>, <1.6846, -0.2931, 2.1339>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1456, -0.1920, 1.1473>, <3.2288, -0.3144, 1.0857>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <4.9367, 6.5925, 3.5159>, <5.5777, 8.8436, 4.1093>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[89] = union {
    object {AtomsGroup_89}
    object {BondsGroup_89}
}
// End of Section 89
        //Begin of Section 90  
#declare AtomsGroup_90 = union {
  sphere { <-0.0203, -0.0176, -0.0095>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3625, -0.0833, -0.0049>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1456, -0.1920, 1.1473>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <4.7765, 6.3227, 3.3729>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <5.4175, 8.5738, 3.9662>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8861, -0.0194, -0.9661>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5814, 0.1095, -0.9387>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5892, -0.0675, 0.9239>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6846, -0.2931, 2.1339>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2288, -0.3144, 1.0857>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_90 = union {
  cylinder { <-0.0203, -0.0176, -0.0095>, <1.3625, -0.0833, -0.0049>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0203, -0.0176, -0.0095>, <-0.5814, 0.1095, -0.9387>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0203, -0.0176, -0.0095>, <-0.5892, -0.0675, 0.9239>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0833, -0.0049>, <2.1456, -0.1920, 1.1473>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0833, -0.0049>, <1.8861, -0.0194, -0.9661>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1456, -0.1920, 1.1473>, <1.6846, -0.2931, 2.1339>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1456, -0.1920, 1.1473>, <3.2288, -0.3144, 1.0857>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <4.7765, 6.3227, 3.3729>, <5.4175, 8.5738, 3.9662>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[90] = union {
    object {AtomsGroup_90}
    object {BondsGroup_90}
}
// End of Section 90
        //Begin of Section 91  
#declare AtomsGroup_91 = union {
  sphere { <-0.0203, -0.0176, -0.0095>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3625, -0.0833, -0.0049>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1456, -0.1920, 1.1473>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <4.6163, 6.0530, 3.2298>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <5.2572, 8.3041, 3.8232>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8861, -0.0194, -0.9661>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5814, 0.1095, -0.9387>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5892, -0.0675, 0.9239>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6846, -0.2931, 2.1339>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2288, -0.3144, 1.0857>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_91 = union {
  cylinder { <-0.0203, -0.0176, -0.0095>, <1.3625, -0.0833, -0.0049>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0203, -0.0176, -0.0095>, <-0.5814, 0.1095, -0.9387>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0203, -0.0176, -0.0095>, <-0.5892, -0.0675, 0.9239>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0833, -0.0049>, <2.1456, -0.1920, 1.1473>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0833, -0.0049>, <1.8861, -0.0194, -0.9661>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1456, -0.1920, 1.1473>, <1.6846, -0.2931, 2.1339>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1456, -0.1920, 1.1473>, <3.2288, -0.3144, 1.0857>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <4.6163, 6.0530, 3.2298>, <5.2572, 8.3041, 3.8232>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[91] = union {
    object {AtomsGroup_91}
    object {BondsGroup_91}
}
// End of Section 91
        //Begin of Section 92  
#declare AtomsGroup_92 = union {
  sphere { <-0.0203, -0.0176, -0.0095>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3625, -0.0833, -0.0049>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1456, -0.1920, 1.1473>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <4.4561, 5.7832, 3.0868>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <5.0970, 8.0343, 3.6801>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8861, -0.0194, -0.9661>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5814, 0.1095, -0.9387>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5892, -0.0675, 0.9239>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6846, -0.2931, 2.1339>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2288, -0.3144, 1.0857>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_92 = union {
  cylinder { <-0.0203, -0.0176, -0.0095>, <1.3625, -0.0833, -0.0049>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0203, -0.0176, -0.0095>, <-0.5814, 0.1095, -0.9387>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0203, -0.0176, -0.0095>, <-0.5892, -0.0675, 0.9239>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0833, -0.0049>, <2.1456, -0.1920, 1.1473>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0833, -0.0049>, <1.8861, -0.0194, -0.9661>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1456, -0.1920, 1.1473>, <1.6846, -0.2931, 2.1339>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1456, -0.1920, 1.1473>, <3.2288, -0.3144, 1.0857>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <4.4561, 5.7832, 3.0868>, <5.0970, 8.0343, 3.6801>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[92] = union {
    object {AtomsGroup_92}
    object {BondsGroup_92}
}
// End of Section 92
        //Begin of Section 93  
#declare AtomsGroup_93 = union {
  sphere { <-0.0203, -0.0176, -0.0095>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3625, -0.0833, -0.0049>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1456, -0.1920, 1.1473>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <4.2959, 5.5134, 2.9437>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <4.9368, 7.7645, 3.5370>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8861, -0.0194, -0.9661>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5814, 0.1095, -0.9387>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5892, -0.0675, 0.9239>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6846, -0.2931, 2.1339>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2288, -0.3144, 1.0857>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_93 = union {
  cylinder { <-0.0203, -0.0176, -0.0095>, <1.3625, -0.0833, -0.0049>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0203, -0.0176, -0.0095>, <-0.5814, 0.1095, -0.9387>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0203, -0.0176, -0.0095>, <-0.5892, -0.0675, 0.9239>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0833, -0.0049>, <2.1456, -0.1920, 1.1473>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0833, -0.0049>, <1.8861, -0.0194, -0.9661>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1456, -0.1920, 1.1473>, <1.6846, -0.2931, 2.1339>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1456, -0.1920, 1.1473>, <3.2288, -0.3144, 1.0857>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <4.2959, 5.5134, 2.9437>, <4.9368, 7.7645, 3.5370>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[93] = union {
    object {AtomsGroup_93}
    object {BondsGroup_93}
}
// End of Section 93
        //Begin of Section 94  
#declare AtomsGroup_94 = union {
  sphere { <-0.0203, -0.0176, -0.0095>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3625, -0.0833, -0.0049>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1456, -0.1920, 1.1473>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <4.1357, 5.2437, 2.8006>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <4.7766, 7.4948, 3.3940>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8861, -0.0194, -0.9661>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5814, 0.1095, -0.9387>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5892, -0.0675, 0.9239>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6846, -0.2931, 2.1339>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2288, -0.3144, 1.0857>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_94 = union {
  cylinder { <-0.0203, -0.0176, -0.0095>, <1.3625, -0.0833, -0.0049>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0203, -0.0176, -0.0095>, <-0.5814, 0.1095, -0.9387>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0203, -0.0176, -0.0095>, <-0.5892, -0.0675, 0.9239>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0833, -0.0049>, <2.1456, -0.1920, 1.1473>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0833, -0.0049>, <1.8861, -0.0194, -0.9661>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1456, -0.1920, 1.1473>, <1.6846, -0.2931, 2.1339>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1456, -0.1920, 1.1473>, <3.2288, -0.3144, 1.0857>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <4.1357, 5.2437, 2.8006>, <4.7766, 7.4948, 3.3940>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[94] = union {
    object {AtomsGroup_94}
    object {BondsGroup_94}
}
// End of Section 94
        //Begin of Section 95  
#declare AtomsGroup_95 = union {
  sphere { <-0.0203, -0.0176, -0.0095>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3625, -0.0833, -0.0049>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1456, -0.1920, 1.1473>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.9755, 4.9739, 2.6576>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <4.6164, 7.2250, 3.2509>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8861, -0.0194, -0.9661>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5814, 0.1095, -0.9387>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5892, -0.0675, 0.9239>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6846, -0.2931, 2.1339>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2288, -0.3144, 1.0857>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_95 = union {
  cylinder { <-0.0203, -0.0176, -0.0095>, <1.3625, -0.0833, -0.0049>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0203, -0.0176, -0.0095>, <-0.5814, 0.1095, -0.9387>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0203, -0.0176, -0.0095>, <-0.5892, -0.0675, 0.9239>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0833, -0.0049>, <2.1456, -0.1920, 1.1473>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0833, -0.0049>, <1.8861, -0.0194, -0.9661>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1456, -0.1920, 1.1473>, <1.6846, -0.2931, 2.1339>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1456, -0.1920, 1.1473>, <3.2288, -0.3144, 1.0857>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <3.9755, 4.9739, 2.6576>, <4.6164, 7.2250, 3.2509>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[95] = union {
    object {AtomsGroup_95}
    object {BondsGroup_95}
}
// End of Section 95
        //Begin of Section 96  
#declare AtomsGroup_96 = union {
  sphere { <-0.0203, -0.0176, -0.0095>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3625, -0.0833, -0.0049>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1456, -0.1920, 1.1473>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.8153, 4.7041, 2.5145>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <4.4562, 6.9552, 3.1079>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8861, -0.0194, -0.9661>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5814, 0.1095, -0.9387>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5892, -0.0675, 0.9239>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6846, -0.2931, 2.1339>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2288, -0.3144, 1.0857>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_96 = union {
  cylinder { <-0.0203, -0.0176, -0.0095>, <1.3625, -0.0833, -0.0049>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0203, -0.0176, -0.0095>, <-0.5814, 0.1095, -0.9387>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0203, -0.0176, -0.0095>, <-0.5892, -0.0675, 0.9239>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0833, -0.0049>, <2.1456, -0.1920, 1.1473>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0833, -0.0049>, <1.8861, -0.0194, -0.9661>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1456, -0.1920, 1.1473>, <1.6846, -0.2931, 2.1339>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1456, -0.1920, 1.1473>, <3.2288, -0.3144, 1.0857>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <3.8153, 4.7041, 2.5145>, <4.4562, 6.9552, 3.1079>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[96] = union {
    object {AtomsGroup_96}
    object {BondsGroup_96}
}
// End of Section 96
        //Begin of Section 97  
#declare AtomsGroup_97 = union {
  sphere { <-0.0203, -0.0176, -0.0095>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3625, -0.0833, -0.0049>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1456, -0.1920, 1.1473>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.6551, 4.4344, 2.3715>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <4.2960, 6.6855, 2.9648>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8861, -0.0194, -0.9661>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5814, 0.1095, -0.9387>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5892, -0.0675, 0.9239>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6846, -0.2931, 2.1339>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2288, -0.3144, 1.0857>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_97 = union {
  cylinder { <-0.0203, -0.0176, -0.0095>, <1.3625, -0.0833, -0.0049>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0203, -0.0176, -0.0095>, <-0.5814, 0.1095, -0.9387>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0203, -0.0176, -0.0095>, <-0.5892, -0.0675, 0.9239>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0833, -0.0049>, <2.1456, -0.1920, 1.1473>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0833, -0.0049>, <1.8861, -0.0194, -0.9661>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1456, -0.1920, 1.1473>, <1.6846, -0.2931, 2.1339>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1456, -0.1920, 1.1473>, <3.2288, -0.3144, 1.0857>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <3.6551, 4.4344, 2.3715>, <4.2960, 6.6855, 2.9648>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[97] = union {
    object {AtomsGroup_97}
    object {BondsGroup_97}
}
// End of Section 97
        //Begin of Section 98  
#declare AtomsGroup_98 = union {
  sphere { <-0.0203, -0.0176, -0.0095>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3625, -0.0833, -0.0049>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1456, -0.1920, 1.1473>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.4949, 4.1646, 2.2284>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <4.1358, 6.4157, 2.8218>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8861, -0.0194, -0.9661>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5814, 0.1095, -0.9387>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5892, -0.0675, 0.9239>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6846, -0.2931, 2.1339>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2288, -0.3144, 1.0857>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_98 = union {
  cylinder { <-0.0203, -0.0176, -0.0095>, <1.3625, -0.0833, -0.0049>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0203, -0.0176, -0.0095>, <-0.5814, 0.1095, -0.9387>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0203, -0.0176, -0.0095>, <-0.5892, -0.0675, 0.9239>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0833, -0.0049>, <2.1456, -0.1920, 1.1473>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0833, -0.0049>, <1.8861, -0.0194, -0.9661>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1456, -0.1920, 1.1473>, <1.6846, -0.2931, 2.1339>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1456, -0.1920, 1.1473>, <3.2288, -0.3144, 1.0857>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <3.4949, 4.1646, 2.2284>, <4.1358, 6.4157, 2.8218>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[98] = union {
    object {AtomsGroup_98}
    object {BondsGroup_98}
}
// End of Section 98
        //Begin of Section 99  
#declare AtomsGroup_99 = union {
  sphere { <-0.0203, -0.0176, -0.0095>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3625, -0.0833, -0.0049>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1456, -0.1920, 1.1473>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.3347, 3.8948, 2.0854>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.9756, 6.1459, 2.6787>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8861, -0.0194, -0.9661>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5814, 0.1095, -0.9387>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5892, -0.0675, 0.9239>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6846, -0.2931, 2.1339>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2288, -0.3144, 1.0857>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_99 = union {
  cylinder { <-0.0203, -0.0176, -0.0095>, <1.3625, -0.0833, -0.0049>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0203, -0.0176, -0.0095>, <-0.5814, 0.1095, -0.9387>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0203, -0.0176, -0.0095>, <-0.5892, -0.0675, 0.9239>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0833, -0.0049>, <2.1456, -0.1920, 1.1473>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0833, -0.0049>, <1.8861, -0.0194, -0.9661>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1456, -0.1920, 1.1473>, <1.6846, -0.2931, 2.1339>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1456, -0.1920, 1.1473>, <3.2288, -0.3144, 1.0857>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <3.3347, 3.8948, 2.0854>, <3.9756, 6.1459, 2.6787>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[99] = union {
    object {AtomsGroup_99}
    object {BondsGroup_99}
}
// End of Section 99
        //Begin of Section 100  
#declare AtomsGroup_100 = union {
  sphere { <-0.0203, -0.0176, -0.0095>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3625, -0.0833, -0.0049>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1456, -0.1920, 1.1473>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.1745, 3.6250, 1.9423>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.8154, 5.8761, 2.5357>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8861, -0.0194, -0.9661>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5814, 0.1095, -0.9387>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5892, -0.0675, 0.9239>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6846, -0.2931, 2.1339>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2288, -0.3144, 1.0857>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_100 = union {
  cylinder { <-0.0203, -0.0176, -0.0095>, <1.3625, -0.0833, -0.0049>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0203, -0.0176, -0.0095>, <-0.5814, 0.1095, -0.9387>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0203, -0.0176, -0.0095>, <-0.5892, -0.0675, 0.9239>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0833, -0.0049>, <2.1456, -0.1920, 1.1473>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0833, -0.0049>, <1.8861, -0.0194, -0.9661>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1456, -0.1920, 1.1473>, <1.6846, -0.2931, 2.1339>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1456, -0.1920, 1.1473>, <3.2288, -0.3144, 1.0857>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <3.1745, 3.6250, 1.9423>, <3.8154, 5.8761, 2.5357>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[100] = union {
    object {AtomsGroup_100}
    object {BondsGroup_100}
}
// End of Section 100
        //Begin of Section 101  
#declare AtomsGroup_101 = union {
  sphere { <-0.0203, -0.0176, -0.0095>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3625, -0.0833, -0.0049>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1456, -0.1920, 1.1473>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.0143, 3.3553, 1.7993>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.6552, 5.6064, 2.3926>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8861, -0.0194, -0.9661>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5814, 0.1095, -0.9387>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5892, -0.0675, 0.9239>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6846, -0.2931, 2.1339>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2288, -0.3144, 1.0857>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_101 = union {
  cylinder { <-0.0203, -0.0176, -0.0095>, <1.3625, -0.0833, -0.0049>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0203, -0.0176, -0.0095>, <-0.5814, 0.1095, -0.9387>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0203, -0.0176, -0.0095>, <-0.5892, -0.0675, 0.9239>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0833, -0.0049>, <2.1456, -0.1920, 1.1473>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0833, -0.0049>, <1.8861, -0.0194, -0.9661>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1456, -0.1920, 1.1473>, <1.6846, -0.2931, 2.1339>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1456, -0.1920, 1.1473>, <3.2288, -0.3144, 1.0857>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <3.0143, 3.3553, 1.7993>, <3.6552, 5.6064, 2.3926>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[101] = union {
    object {AtomsGroup_101}
    object {BondsGroup_101}
}
// End of Section 101
        //Begin of Section 102  
#declare AtomsGroup_102 = union {
  sphere { <-0.0203, -0.0176, -0.0095>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3625, -0.0833, -0.0049>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1456, -0.1920, 1.1473>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.8541, 3.0855, 1.6562>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.4950, 5.3366, 2.2496>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8861, -0.0194, -0.9661>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5814, 0.1095, -0.9387>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5892, -0.0675, 0.9239>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6846, -0.2931, 2.1339>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2288, -0.3144, 1.0857>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_102 = union {
  cylinder { <-0.0203, -0.0176, -0.0095>, <1.3625, -0.0833, -0.0049>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0203, -0.0176, -0.0095>, <-0.5814, 0.1095, -0.9387>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0203, -0.0176, -0.0095>, <-0.5892, -0.0675, 0.9239>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0833, -0.0049>, <2.1456, -0.1920, 1.1473>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0833, -0.0049>, <1.8861, -0.0194, -0.9661>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1456, -0.1920, 1.1473>, <1.6846, -0.2931, 2.1339>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1456, -0.1920, 1.1473>, <3.2288, -0.3144, 1.0857>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.8541, 3.0855, 1.6562>, <3.4950, 5.3366, 2.2496>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[102] = union {
    object {AtomsGroup_102}
    object {BondsGroup_102}
}
// End of Section 102
        //Begin of Section 103  
#declare AtomsGroup_103 = union {
  sphere { <-0.0203, -0.0176, -0.0095>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3625, -0.0833, -0.0049>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1456, -0.1920, 1.1473>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.6939, 2.8157, 1.5132>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.3348, 5.0668, 2.1065>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8861, -0.0194, -0.9661>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5814, 0.1095, -0.9387>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5892, -0.0675, 0.9239>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6846, -0.2931, 2.1339>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2288, -0.3144, 1.0857>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_103 = union {
  cylinder { <-0.0203, -0.0176, -0.0095>, <1.3625, -0.0833, -0.0049>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0203, -0.0176, -0.0095>, <-0.5814, 0.1095, -0.9387>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0203, -0.0176, -0.0095>, <-0.5892, -0.0675, 0.9239>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0833, -0.0049>, <2.1456, -0.1920, 1.1473>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0833, -0.0049>, <1.8861, -0.0194, -0.9661>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1456, -0.1920, 1.1473>, <1.6846, -0.2931, 2.1339>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1456, -0.1920, 1.1473>, <3.2288, -0.3144, 1.0857>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.6939, 2.8157, 1.5132>, <3.3348, 5.0668, 2.1065>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[103] = union {
    object {AtomsGroup_103}
    object {BondsGroup_103}
}
// End of Section 103
        //Begin of Section 104  
#declare AtomsGroup_104 = union {
  sphere { <-0.0203, -0.0176, -0.0095>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3625, -0.0833, -0.0049>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1456, -0.1920, 1.1473>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.5337, 2.5460, 1.3701>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.1746, 4.7971, 1.9634>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8861, -0.0194, -0.9661>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5814, 0.1095, -0.9387>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5892, -0.0675, 0.9239>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6846, -0.2931, 2.1339>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2288, -0.3144, 1.0857>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_104 = union {
  cylinder { <-0.0203, -0.0176, -0.0095>, <1.3625, -0.0833, -0.0049>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0203, -0.0176, -0.0095>, <-0.5814, 0.1095, -0.9387>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0203, -0.0176, -0.0095>, <-0.5892, -0.0675, 0.9239>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0833, -0.0049>, <2.1456, -0.1920, 1.1473>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0833, -0.0049>, <1.8861, -0.0194, -0.9661>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1456, -0.1920, 1.1473>, <1.6846, -0.2931, 2.1339>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1456, -0.1920, 1.1473>, <3.2288, -0.3144, 1.0857>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.5337, 2.5460, 1.3701>, <3.1746, 4.7971, 1.9634>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[104] = union {
    object {AtomsGroup_104}
    object {BondsGroup_104}
}
// End of Section 104
        //Begin of Section 105  
#declare AtomsGroup_105 = union {
  sphere { <-0.0207, -0.0154, -0.0105>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3625, -0.0855, -0.0046>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1454, -0.2055, 1.1466>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.5318, 2.5530, 1.3680>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.1739, 4.7916, 1.9627>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8868, -0.0176, -0.9649>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5821, 0.1119, -0.9386>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5875, -0.0681, 0.9242>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6848, -0.2896, 2.1357>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2301, -0.3096, 1.0865>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_105 = union {
  cylinder { <-0.0207, -0.0154, -0.0105>, <1.3625, -0.0855, -0.0046>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0207, -0.0154, -0.0105>, <-0.5821, 0.1119, -0.9386>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0207, -0.0154, -0.0105>, <-0.5875, -0.0681, 0.9242>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0855, -0.0046>, <2.1454, -0.2055, 1.1466>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3625, -0.0855, -0.0046>, <1.8868, -0.0176, -0.9649>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1454, -0.2055, 1.1466>, <1.6848, -0.2896, 2.1357>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1454, -0.2055, 1.1466>, <3.2301, -0.3096, 1.0865>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.5318, 2.5530, 1.3680>, <3.1739, 4.7916, 1.9627>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[105] = union {
    object {AtomsGroup_105}
    object {BondsGroup_105}
}
// End of Section 105
        //Begin of Section 106  
#declare AtomsGroup_106 = union {
  sphere { <-0.0219, -0.0143, -0.0102>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3645, -0.0851, -0.0038>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1439, -0.2164, 1.1469>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.5317, 2.5598, 1.3677>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.1725, 4.7850, 1.9614>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8872, -0.0165, -0.9652>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5839, 0.1132, -0.9410>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5864, -0.0685, 0.9253>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6845, -0.2862, 2.1373>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2327, -0.3058, 1.0865>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_106 = union {
  cylinder { <-0.0219, -0.0143, -0.0102>, <1.3645, -0.0851, -0.0038>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0219, -0.0143, -0.0102>, <-0.5839, 0.1132, -0.9410>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0219, -0.0143, -0.0102>, <-0.5864, -0.0685, 0.9253>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3645, -0.0851, -0.0038>, <2.1439, -0.2164, 1.1469>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3645, -0.0851, -0.0038>, <1.8872, -0.0165, -0.9652>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1439, -0.2164, 1.1469>, <1.6845, -0.2862, 2.1373>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1439, -0.2164, 1.1469>, <3.2327, -0.3058, 1.0865>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.5317, 2.5598, 1.3677>, <3.1725, 4.7850, 1.9614>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[106] = union {
    object {AtomsGroup_106}
    object {BondsGroup_106}
}
// End of Section 106
        //Begin of Section 107  
#declare AtomsGroup_107 = union {
  sphere { <-0.0226, -0.0139, -0.0098>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3664, -0.0844, -0.0029>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1430, -0.2231, 1.1474>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.5320, 2.5645, 1.3679>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.1714, 4.7803, 1.9604>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8875, -0.0159, -0.9660>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5855, 0.1139, -0.9435>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5860, -0.0687, 0.9266>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6842, -0.2840, 2.1386>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2346, -0.3036, 1.0864>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_107 = union {
  cylinder { <-0.0226, -0.0139, -0.0098>, <1.3664, -0.0844, -0.0029>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0226, -0.0139, -0.0098>, <-0.5855, 0.1139, -0.9435>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0226, -0.0139, -0.0098>, <-0.5860, -0.0687, 0.9266>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3664, -0.0844, -0.0029>, <2.1430, -0.2231, 1.1474>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3664, -0.0844, -0.0029>, <1.8875, -0.0159, -0.9660>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1430, -0.2231, 1.1474>, <1.6842, -0.2840, 2.1386>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1430, -0.2231, 1.1474>, <3.2346, -0.3036, 1.0864>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.5320, 2.5645, 1.3679>, <3.1714, 4.7803, 1.9604>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[107] = union {
    object {AtomsGroup_107}
    object {BondsGroup_107}
}
// End of Section 107
        //Begin of Section 108  
#declare AtomsGroup_108 = union {
  sphere { <-0.0232, -0.0137, -0.0098>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3699, -0.0823, -0.0012>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1433, -0.2324, 1.1487>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.5331, 2.5723, 1.3689>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.1694, 4.7721, 1.9585>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.8881, -0.0154, -0.9683>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5887, 0.1149, -0.9487>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5866, -0.0690, 0.9306>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6831, -0.2810, 2.1407>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2366, -0.3004, 1.0857>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_108 = union {
  cylinder { <-0.0232, -0.0137, -0.0098>, <1.3699, -0.0823, -0.0012>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0232, -0.0137, -0.0098>, <-0.5887, 0.1149, -0.9487>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <-0.0232, -0.0137, -0.0098>, <-0.5866, -0.0690, 0.9306>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3699, -0.0823, -0.0012>, <2.1433, -0.2324, 1.1487>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3699, -0.0823, -0.0012>, <1.8881, -0.0154, -0.9683>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1433, -0.2324, 1.1487>, <1.6831, -0.2810, 2.1407>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1433, -0.2324, 1.1487>, <3.2366, -0.3004, 1.0857>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.5331, 2.5723, 1.3689>, <3.1694, 4.7721, 1.9585>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[108] = union {
    object {AtomsGroup_108}
    object {BondsGroup_108}
}
// End of Section 108
        //Begin of Section 109  
#declare AtomsGroup_109 = union {
  sphere { <0.0225, -0.0391, 0.0192>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3956, -0.0288, 0.0262>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1783, 0.0178, 1.2012>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.4901, 2.5011, 1.3225>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.1944, 4.7992, 1.9859>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.9255, -0.0371, -0.9329>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5407, -0.0707, -0.9162>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5467, -0.0082, 0.9533>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.7006, -0.0791, 2.1795>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2509, -0.1768, 1.1556>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_109 = union {
  cylinder { <0.0225, -0.0391, 0.0192>, <1.3956, -0.0288, 0.0262>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0225, -0.0391, 0.0192>, <-0.5407, -0.0707, -0.9162>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0225, -0.0391, 0.0192>, <-0.5467, -0.0082, 0.9533>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3956, -0.0288, 0.0262>, <2.1783, 0.0178, 1.2012>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3956, -0.0288, 0.0262>, <1.9255, -0.0371, -0.9329>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1783, 0.0178, 1.2012>, <2.4901, 2.5011, 1.3225>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1783, 0.0178, 1.2012>, <1.7006, -0.0791, 2.1795>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1783, 0.0178, 1.2012>, <3.2509, -0.1768, 1.1556>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.4901, 2.5011, 1.3225>, <3.1944, 4.7992, 1.9859>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[109] = union {
    object {AtomsGroup_109}
    object {BondsGroup_109}
}
// End of Section 109
        //Begin of Section 110  
#declare AtomsGroup_110 = union {
  sphere { <0.0681, -0.0645, 0.0481>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.4214, 0.0247, 0.0537>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.2133, 0.2681, 1.2537>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.4472, 2.4299, 1.2762>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2193, 4.8262, 2.0134>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.9628, -0.0588, -0.8974>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.4927, -0.2563, -0.8838>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5067, 0.0526, 0.9760>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.7180, 0.1227, 2.2183>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2651, -0.0532, 1.2255>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_110 = union {
  cylinder { <0.0681, -0.0645, 0.0481>, <1.4214, 0.0247, 0.0537>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0681, -0.0645, 0.0481>, <-0.4927, -0.2563, -0.8838>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0681, -0.0645, 0.0481>, <-0.5067, 0.0526, 0.9760>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4214, 0.0247, 0.0537>, <2.2133, 0.2681, 1.2537>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4214, 0.0247, 0.0537>, <1.9628, -0.0588, -0.8974>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2133, 0.2681, 1.2537>, <2.4472, 2.4299, 1.2762>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2133, 0.2681, 1.2537>, <1.7180, 0.1227, 2.2183>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2133, 0.2681, 1.2537>, <3.2651, -0.0532, 1.2255>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.4472, 2.4299, 1.2762>, <3.2193, 4.8262, 2.0134>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[110] = union {
    object {AtomsGroup_110}
    object {BondsGroup_110}
}
// End of Section 110
        //Begin of Section 111  
#declare AtomsGroup_111 = union {
  sphere { <0.0698, -0.0678, 0.0488>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.4162, 0.0206, 0.0513>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.2175, 0.2924, 1.2540>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.4284, 2.3955, 1.2515>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2349, 4.8555, 2.0293>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.9630, -0.0585, -0.8920>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.4843, -0.2522, -0.8696>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5060, 0.0496, 0.9672>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.7210, 0.1131, 2.2140>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2554, -0.0568, 1.2290>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_111 = union {
  cylinder { <0.0698, -0.0678, 0.0488>, <1.4162, 0.0206, 0.0513>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0698, -0.0678, 0.0488>, <-0.4843, -0.2522, -0.8696>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0698, -0.0678, 0.0488>, <-0.5060, 0.0496, 0.9672>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4162, 0.0206, 0.0513>, <2.2175, 0.2924, 1.2540>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4162, 0.0206, 0.0513>, <1.9630, -0.0585, -0.8920>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2175, 0.2924, 1.2540>, <2.4284, 2.3955, 1.2515>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2175, 0.2924, 1.2540>, <1.7210, 0.1131, 2.2140>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2175, 0.2924, 1.2540>, <3.2554, -0.0568, 1.2290>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.4284, 2.3955, 1.2515>, <3.2349, 4.8555, 2.0293>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[111] = union {
    object {AtomsGroup_111}
    object {BondsGroup_111}
}
// End of Section 111
        //Begin of Section 112  
#declare AtomsGroup_112 = union {
  sphere { <0.0707, -0.0696, 0.0501>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.4191, 0.0203, 0.0525>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.2180, 0.3022, 1.2552>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.4211, 2.3832, 1.2412>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2417, 4.8660, 2.0364>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.9635, -0.0591, -0.8924>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.4850, -0.2529, -0.8716>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5078, 0.0492, 0.9696>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.7218, 0.1101, 2.2128>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2529, -0.0580, 1.2300>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_112 = union {
  cylinder { <0.0707, -0.0696, 0.0501>, <1.4191, 0.0203, 0.0525>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0707, -0.0696, 0.0501>, <-0.4850, -0.2529, -0.8716>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0707, -0.0696, 0.0501>, <-0.5078, 0.0492, 0.9696>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4191, 0.0203, 0.0525>, <2.2180, 0.3022, 1.2552>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4191, 0.0203, 0.0525>, <1.9635, -0.0591, -0.8924>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2180, 0.3022, 1.2552>, <2.4211, 2.3832, 1.2412>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2180, 0.3022, 1.2552>, <1.7218, 0.1101, 2.2128>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2180, 0.3022, 1.2552>, <3.2529, -0.0580, 1.2300>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.4211, 2.3832, 1.2412>, <3.2417, 4.8660, 2.0364>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[112] = union {
    object {AtomsGroup_112}
    object {BondsGroup_112}
}
// End of Section 112
        //Begin of Section 113  
#declare AtomsGroup_113 = union {
  sphere { <0.0724, -0.0705, 0.0504>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.4174, 0.0199, 0.0527>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.2183, 0.3060, 1.2556>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.4179, 2.3785, 1.2365>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2450, 4.8707, 2.0399>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.9639, -0.0594, -0.8927>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.4847, -0.2532, -0.8717>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5082, 0.0489, 0.9700>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.7221, 0.1089, 2.2123>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2519, -0.0583, 1.2306>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_113 = union {
  cylinder { <0.0724, -0.0705, 0.0504>, <1.4174, 0.0199, 0.0527>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0724, -0.0705, 0.0504>, <-0.4847, -0.2532, -0.8717>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0724, -0.0705, 0.0504>, <-0.5082, 0.0489, 0.9700>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4174, 0.0199, 0.0527>, <2.2183, 0.3060, 1.2556>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4174, 0.0199, 0.0527>, <1.9639, -0.0594, -0.8927>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2183, 0.3060, 1.2556>, <2.4179, 2.3785, 1.2365>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2183, 0.3060, 1.2556>, <1.7221, 0.1089, 2.2123>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2183, 0.3060, 1.2556>, <3.2519, -0.0583, 1.2306>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.4179, 2.3785, 1.2365>, <3.2450, 4.8707, 2.0399>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[113] = union {
    object {AtomsGroup_113}
    object {BondsGroup_113}
}
// End of Section 113
        //Begin of Section 114  
#declare AtomsGroup_114 = union {
  sphere { <0.0741, -0.0721, 0.0510>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.4156, 0.0190, 0.0529>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.2187, 0.3118, 1.2560>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.4126, 2.3715, 1.2285>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2506, 4.8785, 2.0459>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.9643, -0.0599, -0.8927>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.4842, -0.2539, -0.8716>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5086, 0.0483, 0.9704>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.7226, 0.1071, 2.2115>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2501, -0.0587, 1.2317>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_114 = union {
  cylinder { <0.0741, -0.0721, 0.0510>, <1.4156, 0.0190, 0.0529>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0741, -0.0721, 0.0510>, <-0.4842, -0.2539, -0.8716>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0741, -0.0721, 0.0510>, <-0.5086, 0.0483, 0.9704>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4156, 0.0190, 0.0529>, <2.2187, 0.3118, 1.2560>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4156, 0.0190, 0.0529>, <1.9643, -0.0599, -0.8927>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2187, 0.3118, 1.2560>, <2.4126, 2.3715, 1.2285>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2187, 0.3118, 1.2560>, <1.7226, 0.1071, 2.2115>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2187, 0.3118, 1.2560>, <3.2501, -0.0587, 1.2317>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.4126, 2.3715, 1.2285>, <3.2506, 4.8785, 2.0459>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[114] = union {
    object {AtomsGroup_114}
    object {BondsGroup_114}
}
// End of Section 114
        //Begin of Section 115  
#declare AtomsGroup_115 = union {
  sphere { <0.0737, -0.0742, 0.0516>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.4157, 0.0178, 0.0527>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.2185, 0.3171, 1.2561>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.4069, 2.3651, 1.2193>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2575, 4.8872, 2.0532>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.9644, -0.0607, -0.8922>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.4834, -0.2550, -0.8712>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5087, 0.0474, 0.9706>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.7231, 0.1055, 2.2106>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2481, -0.0588, 1.2329>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_115 = union {
  cylinder { <0.0737, -0.0742, 0.0516>, <1.4157, 0.0178, 0.0527>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0737, -0.0742, 0.0516>, <-0.4834, -0.2550, -0.8712>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0737, -0.0742, 0.0516>, <-0.5087, 0.0474, 0.9706>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4157, 0.0178, 0.0527>, <2.2185, 0.3171, 1.2561>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4157, 0.0178, 0.0527>, <1.9644, -0.0607, -0.8922>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2185, 0.3171, 1.2561>, <2.4069, 2.3651, 1.2193>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2185, 0.3171, 1.2561>, <1.7231, 0.1055, 2.2106>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2185, 0.3171, 1.2561>, <3.2481, -0.0588, 1.2329>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.4069, 2.3651, 1.2193>, <3.2575, 4.8872, 2.0532>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[115] = union {
    object {AtomsGroup_115}
    object {BondsGroup_115}
}
// End of Section 115
        //Begin of Section 116  
#declare AtomsGroup_116 = union {
  sphere { <0.0744, -0.0765, 0.0520>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.4145, 0.0161, 0.0528>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.2180, 0.3207, 1.2558>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.4016, 2.3615, 1.2101>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2650, 4.8956, 2.0613>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.9645, -0.0618, -0.8921>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.4830, -0.2567, -0.8710>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5088, 0.0463, 0.9709>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.7234, 0.1045, 2.2098>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2463, -0.0583, 1.2340>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_116 = union {
  cylinder { <0.0744, -0.0765, 0.0520>, <1.4145, 0.0161, 0.0528>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0744, -0.0765, 0.0520>, <-0.4830, -0.2567, -0.8710>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0744, -0.0765, 0.0520>, <-0.5088, 0.0463, 0.9709>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4145, 0.0161, 0.0528>, <2.2180, 0.3207, 1.2558>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4145, 0.0161, 0.0528>, <1.9645, -0.0618, -0.8921>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2180, 0.3207, 1.2558>, <2.4016, 2.3615, 1.2101>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2180, 0.3207, 1.2558>, <1.7234, 0.1045, 2.2098>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2180, 0.3207, 1.2558>, <3.2463, -0.0583, 1.2340>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.4016, 2.3615, 1.2101>, <3.2650, 4.8956, 2.0613>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[116] = union {
    object {AtomsGroup_116}
    object {BondsGroup_116}
}
// End of Section 116
        //Begin of Section 117  
#declare AtomsGroup_117 = union {
  sphere { <0.0740, -0.0794, 0.0524>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.4140, 0.0138, 0.0524>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.2170, 0.3235, 1.2552>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.3967, 2.3602, 1.2006>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2734, 4.9038, 2.0704>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.9644, -0.0633, -0.8919>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.4827, -0.2592, -0.8708>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5089, 0.0448, 0.9711>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.7233, 0.1044, 2.2091>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2447, -0.0572, 1.2351>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_117 = union {
  cylinder { <0.0740, -0.0794, 0.0524>, <1.4140, 0.0138, 0.0524>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0740, -0.0794, 0.0524>, <-0.4827, -0.2592, -0.8708>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0740, -0.0794, 0.0524>, <-0.5089, 0.0448, 0.9711>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4140, 0.0138, 0.0524>, <2.2170, 0.3235, 1.2552>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4140, 0.0138, 0.0524>, <1.9644, -0.0633, -0.8919>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2170, 0.3235, 1.2552>, <2.3967, 2.3602, 1.2006>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2170, 0.3235, 1.2552>, <1.7233, 0.1044, 2.2091>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2170, 0.3235, 1.2552>, <3.2447, -0.0572, 1.2351>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.3967, 2.3602, 1.2006>, <3.2734, 4.9038, 2.0704>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[117] = union {
    object {AtomsGroup_117}
    object {BondsGroup_117}
}
// End of Section 117
        //Begin of Section 118  
#declare AtomsGroup_118 = union {
  sphere { <0.0739, -0.0827, 0.0525>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.4129, 0.0111, 0.0525>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.2157, 0.3259, 1.2541>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.3925, 2.3608, 1.1915>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2824, 4.9113, 2.0803>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.9642, -0.0654, -0.8922>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.4829, -0.2624, -0.8708>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5090, 0.0429, 0.9714>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.7227, 0.1054, 2.2084>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2434, -0.0553, 1.2359>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_118 = union {
  cylinder { <0.0739, -0.0827, 0.0525>, <1.4129, 0.0111, 0.0525>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0739, -0.0827, 0.0525>, <-0.4829, -0.2624, -0.8708>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0739, -0.0827, 0.0525>, <-0.5090, 0.0429, 0.9714>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4129, 0.0111, 0.0525>, <2.2157, 0.3259, 1.2541>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4129, 0.0111, 0.0525>, <1.9642, -0.0654, -0.8922>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2157, 0.3259, 1.2541>, <2.3925, 2.3608, 1.1915>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2157, 0.3259, 1.2541>, <1.7227, 0.1054, 2.2084>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2157, 0.3259, 1.2541>, <3.2434, -0.0553, 1.2359>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.3925, 2.3608, 1.1915>, <3.2824, 4.9113, 2.0803>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[118] = union {
    object {AtomsGroup_118}
    object {BondsGroup_118}
}
// End of Section 118
        //Begin of Section 119  
#declare AtomsGroup_119 = union {
  sphere { <0.0732, -0.0863, 0.0525>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.4123, 0.0085, 0.0511>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.2147, 0.3283, 1.2535>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.3896, 2.3626, 1.1838>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2912, 4.9170, 2.0901>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.9635, -0.0681, -0.8920>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.4833, -0.2664, -0.8707>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5092, 0.0406, 0.9714>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.7219, 0.1079, 2.2076>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2421, -0.0526, 1.2364>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_119 = union {
  cylinder { <0.0732, -0.0863, 0.0525>, <1.4123, 0.0085, 0.0511>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0732, -0.0863, 0.0525>, <-0.4833, -0.2664, -0.8707>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0732, -0.0863, 0.0525>, <-0.5092, 0.0406, 0.9714>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4123, 0.0085, 0.0511>, <2.2147, 0.3283, 1.2535>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4123, 0.0085, 0.0511>, <1.9635, -0.0681, -0.8920>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2147, 0.3283, 1.2535>, <2.3896, 2.3626, 1.1838>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2147, 0.3283, 1.2535>, <1.7219, 0.1079, 2.2076>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2147, 0.3283, 1.2535>, <3.2421, -0.0526, 1.2364>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.3896, 2.3626, 1.1838>, <3.2912, 4.9170, 2.0901>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[119] = union {
    object {AtomsGroup_119}
    object {BondsGroup_119}
}
// End of Section 119
        //Begin of Section 120  
#declare AtomsGroup_120 = union {
  sphere { <0.0728, -0.0900, 0.0525>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.4112, 0.0064, 0.0513>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.2130, 0.3313, 1.2519>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.3874, 2.3649, 1.1769>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.3000, 4.9214, 2.1000>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.9631, -0.0714, -0.8928>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.4841, -0.2712, -0.8707>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5095, 0.0379, 0.9712>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.7207, 0.1115, 2.2066>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2412, -0.0494, 1.2367>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_120 = union {
  cylinder { <0.0728, -0.0900, 0.0525>, <1.4112, 0.0064, 0.0513>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0728, -0.0900, 0.0525>, <-0.4841, -0.2712, -0.8707>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0728, -0.0900, 0.0525>, <-0.5095, 0.0379, 0.9712>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4112, 0.0064, 0.0513>, <2.2130, 0.3313, 1.2519>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4112, 0.0064, 0.0513>, <1.9631, -0.0714, -0.8928>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2130, 0.3313, 1.2519>, <2.3874, 2.3649, 1.1769>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2130, 0.3313, 1.2519>, <1.7207, 0.1115, 2.2066>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2130, 0.3313, 1.2519>, <3.2412, -0.0494, 1.2367>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.3874, 2.3649, 1.1769>, <3.3000, 4.9214, 2.1000>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[120] = union {
    object {AtomsGroup_120}
    object {BondsGroup_120}
}
// End of Section 120
        //Begin of Section 121  
#declare AtomsGroup_121 = union {
  sphere { <0.0720, -0.0938, 0.0519>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.4105, 0.0046, 0.0500>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.2121, 0.3346, 1.2505>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.3859, 2.3676, 1.1707>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.3087, 4.9245, 2.1098>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.9622, -0.0748, -0.8929>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.4847, -0.2767, -0.8701>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5100, 0.0352, 0.9712>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.7194, 0.1160, 2.2056>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2398, -0.0455, 1.2369>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_121 = union {
  cylinder { <0.0720, -0.0938, 0.0519>, <1.4105, 0.0046, 0.0500>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0720, -0.0938, 0.0519>, <-0.4847, -0.2767, -0.8701>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0720, -0.0938, 0.0519>, <-0.5100, 0.0352, 0.9712>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4105, 0.0046, 0.0500>, <2.2121, 0.3346, 1.2505>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4105, 0.0046, 0.0500>, <1.9622, -0.0748, -0.8929>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2121, 0.3346, 1.2505>, <2.3859, 2.3676, 1.1707>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2121, 0.3346, 1.2505>, <1.7194, 0.1160, 2.2056>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2121, 0.3346, 1.2505>, <3.2398, -0.0455, 1.2369>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.3859, 2.3676, 1.1707>, <3.3087, 4.9245, 2.1098>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[121] = union {
    object {AtomsGroup_121}
    object {BondsGroup_121}
}
// End of Section 121
        //Begin of Section 122  
#declare AtomsGroup_122 = union {
  sphere { <0.0716, -0.0975, 0.0522>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.4093, 0.0032, 0.0501>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.2103, 0.3382, 1.2489>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.3849, 2.3705, 1.1651>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.3172, 4.9265, 2.1195>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.9616, -0.0784, -0.8939>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.4857, -0.2830, -0.8701>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5104, 0.0324, 0.9708>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.7181, 0.1212, 2.2043>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2389, -0.0416, 1.2369>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_122 = union {
  cylinder { <0.0716, -0.0975, 0.0522>, <1.4093, 0.0032, 0.0501>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0716, -0.0975, 0.0522>, <-0.4857, -0.2830, -0.8701>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0716, -0.0975, 0.0522>, <-0.5104, 0.0324, 0.9708>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4093, 0.0032, 0.0501>, <2.2103, 0.3382, 1.2489>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4093, 0.0032, 0.0501>, <1.9616, -0.0784, -0.8939>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2103, 0.3382, 1.2489>, <2.3849, 2.3705, 1.1651>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2103, 0.3382, 1.2489>, <1.7181, 0.1212, 2.2043>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2103, 0.3382, 1.2489>, <3.2389, -0.0416, 1.2369>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.3849, 2.3705, 1.1651>, <3.3172, 4.9265, 2.1195>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[122] = union {
    object {AtomsGroup_122}
    object {BondsGroup_122}
}
// End of Section 122
        //Begin of Section 123  
#declare AtomsGroup_123 = union {
  sphere { <0.0715, -0.0989, 0.0519>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.4089, 0.0027, 0.0493>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.2101, 0.3397, 1.2483>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.3846, 2.3716, 1.1631>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.3203, 4.9269, 2.1232>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.9612, -0.0797, -0.8939>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.4859, -0.2855, -0.8698>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5107, 0.0313, 0.9708>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.7175, 0.1233, 2.2039>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2384, -0.0400, 1.2369>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_123 = union {
  cylinder { <0.0715, -0.0989, 0.0519>, <1.4089, 0.0027, 0.0493>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0715, -0.0989, 0.0519>, <-0.4859, -0.2855, -0.8698>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0715, -0.0989, 0.0519>, <-0.5107, 0.0313, 0.9708>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4089, 0.0027, 0.0493>, <2.2101, 0.3397, 1.2483>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4089, 0.0027, 0.0493>, <1.9612, -0.0797, -0.8939>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2101, 0.3397, 1.2483>, <2.3846, 2.3716, 1.1631>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2101, 0.3397, 1.2483>, <1.7175, 0.1233, 2.2039>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2101, 0.3397, 1.2483>, <3.2384, -0.0400, 1.2369>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.3846, 2.3716, 1.1631>, <3.3203, 4.9269, 2.1232>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[123] = union {
    object {AtomsGroup_123}
    object {BondsGroup_123}
}
// End of Section 123
        //Begin of Section 124  
#declare AtomsGroup_124 = union {
  sphere { <0.0706, -0.1006, 0.0519>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.4091, 0.0023, 0.0490>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.2093, 0.3415, 1.2475>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.3844, 2.3730, 1.1607>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.3241, 4.9273, 2.1275>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.9608, -0.0812, -0.8941>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.4861, -0.2886, -0.8696>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5109, 0.0301, 0.9706>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.7168, 0.1260, 2.2033>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2378, -0.0381, 1.2368>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_124 = union {
  cylinder { <0.0706, -0.1006, 0.0519>, <1.4091, 0.0023, 0.0490>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0706, -0.1006, 0.0519>, <-0.4861, -0.2886, -0.8696>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0706, -0.1006, 0.0519>, <-0.5109, 0.0301, 0.9706>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4091, 0.0023, 0.0490>, <2.2093, 0.3415, 1.2475>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4091, 0.0023, 0.0490>, <1.9608, -0.0812, -0.8941>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2093, 0.3415, 1.2475>, <2.3844, 2.3730, 1.1607>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2093, 0.3415, 1.2475>, <1.7168, 0.1260, 2.2033>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2093, 0.3415, 1.2475>, <3.2378, -0.0381, 1.2368>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.3844, 2.3730, 1.1607>, <3.3241, 4.9273, 2.1275>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[124] = union {
    object {AtomsGroup_124}
    object {BondsGroup_124}
}
// End of Section 124
        //Begin of Section 125  
#declare AtomsGroup_125 = union {
  sphere { <0.0704, -0.1025, 0.0517>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.4085, 0.0018, 0.0485>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.2087, 0.3435, 1.2467>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.3841, 2.3747, 1.1580>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.3283, 4.9275, 2.1324>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.9603, -0.0829, -0.8943>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.4864, -0.2923, -0.8693>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5113, 0.0287, 0.9705>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.7160, 0.1290, 2.2027>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2372, -0.0360, 1.2367>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_125 = union {
  cylinder { <0.0704, -0.1025, 0.0517>, <1.4085, 0.0018, 0.0485>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0704, -0.1025, 0.0517>, <-0.4864, -0.2923, -0.8693>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0704, -0.1025, 0.0517>, <-0.5113, 0.0287, 0.9705>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4085, 0.0018, 0.0485>, <2.2087, 0.3435, 1.2467>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4085, 0.0018, 0.0485>, <1.9603, -0.0829, -0.8943>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2087, 0.3435, 1.2467>, <2.3841, 2.3747, 1.1580>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2087, 0.3435, 1.2467>, <1.7160, 0.1290, 2.2027>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2087, 0.3435, 1.2467>, <3.2372, -0.0360, 1.2367>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.3841, 2.3747, 1.1580>, <3.3283, 4.9275, 2.1324>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[125] = union {
    object {AtomsGroup_125}
    object {BondsGroup_125}
}
// End of Section 125
        //Begin of Section 126  
#declare AtomsGroup_126 = union {
  sphere { <0.0700, -0.1044, 0.0517>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.4081, 0.0014, 0.0482>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.2080, 0.3456, 1.2458>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.3840, 2.3763, 1.1552>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.3324, 4.9277, 2.1374>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.9599, -0.0846, -0.8946>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.4867, -0.2960, -0.8690>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5116, 0.0273, 0.9703>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.7153, 0.1321, 2.2020>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2365, -0.0338, 1.2366>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_126 = union {
  cylinder { <0.0700, -0.1044, 0.0517>, <1.4081, 0.0014, 0.0482>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0700, -0.1044, 0.0517>, <-0.4867, -0.2960, -0.8690>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0700, -0.1044, 0.0517>, <-0.5116, 0.0273, 0.9703>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4081, 0.0014, 0.0482>, <2.2080, 0.3456, 1.2458>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4081, 0.0014, 0.0482>, <1.9599, -0.0846, -0.8946>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2080, 0.3456, 1.2458>, <2.3840, 2.3763, 1.1552>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2080, 0.3456, 1.2458>, <1.7153, 0.1321, 2.2020>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2080, 0.3456, 1.2458>, <3.2365, -0.0338, 1.2366>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.3840, 2.3763, 1.1552>, <3.3324, 4.9277, 2.1374>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[126] = union {
    object {AtomsGroup_126}
    object {BondsGroup_126}
}
// End of Section 126
        //Begin of Section 127  
#declare AtomsGroup_127 = union {
  sphere { <0.0699, -0.1063, 0.0516>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.4074, 0.0010, 0.0477>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.2074, 0.3477, 1.2450>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.3838, 2.3780, 1.1525>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.3366, 4.9276, 2.1423>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.9594, -0.0863, -0.8949>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.4870, -0.2999, -0.8687>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5119, 0.0259, 0.9702>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.7145, 0.1353, 2.2013>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2359, -0.0316, 1.2366>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_127 = union {
  cylinder { <0.0699, -0.1063, 0.0516>, <1.4074, 0.0010, 0.0477>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0699, -0.1063, 0.0516>, <-0.4870, -0.2999, -0.8687>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0699, -0.1063, 0.0516>, <-0.5119, 0.0259, 0.9702>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4074, 0.0010, 0.0477>, <2.2074, 0.3477, 1.2450>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4074, 0.0010, 0.0477>, <1.9594, -0.0863, -0.8949>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2074, 0.3477, 1.2450>, <2.3838, 2.3780, 1.1525>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2074, 0.3477, 1.2450>, <1.7145, 0.1353, 2.2013>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2074, 0.3477, 1.2450>, <3.2359, -0.0316, 1.2366>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.3838, 2.3780, 1.1525>, <3.3366, 4.9276, 2.1423>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[127] = union {
    object {AtomsGroup_127}
    object {BondsGroup_127}
}
// End of Section 127
        //Begin of Section 128  
#declare AtomsGroup_128 = union {
  sphere { <0.0692, -0.1082, 0.0516>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.4073, 0.0007, 0.0474>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.2066, 0.3499, 1.2441>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.3837, 2.3797, 1.1498>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.3406, 4.9275, 2.1472>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.9590, -0.0878, -0.8952>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.4872, -0.3038, -0.8684>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5122, 0.0246, 0.9699>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.7137, 0.1385, 2.2006>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2352, -0.0295, 1.2365>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_128 = union {
  cylinder { <0.0692, -0.1082, 0.0516>, <1.4073, 0.0007, 0.0474>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0692, -0.1082, 0.0516>, <-0.4872, -0.3038, -0.8684>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0692, -0.1082, 0.0516>, <-0.5122, 0.0246, 0.9699>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4073, 0.0007, 0.0474>, <2.2066, 0.3499, 1.2441>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4073, 0.0007, 0.0474>, <1.9590, -0.0878, -0.8952>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2066, 0.3499, 1.2441>, <2.3837, 2.3797, 1.1498>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2066, 0.3499, 1.2441>, <1.7137, 0.1385, 2.2006>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2066, 0.3499, 1.2441>, <3.2352, -0.0295, 1.2365>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.3837, 2.3797, 1.1498>, <3.3406, 4.9275, 2.1472>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[128] = union {
    object {AtomsGroup_128}
    object {BondsGroup_128}
}
// End of Section 128
        //Begin of Section 129  
#declare AtomsGroup_129 = union {
  sphere { <0.0693, -0.1100, 0.0515>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.4065, 0.0003, 0.0469>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.2061, 0.3520, 1.2433>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.3836, 2.3814, 1.1471>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.3445, 4.9272, 2.1519>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.9585, -0.0893, -0.8953>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.4875, -0.3076, -0.8681>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5126, 0.0233, 0.9699>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.7129, 0.1416, 2.2000>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2345, -0.0274, 1.2364>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_129 = union {
  cylinder { <0.0693, -0.1100, 0.0515>, <1.4065, 0.0003, 0.0469>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0693, -0.1100, 0.0515>, <-0.4875, -0.3076, -0.8681>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0693, -0.1100, 0.0515>, <-0.5126, 0.0233, 0.9699>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4065, 0.0003, 0.0469>, <2.2061, 0.3520, 1.2433>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4065, 0.0003, 0.0469>, <1.9585, -0.0893, -0.8953>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2061, 0.3520, 1.2433>, <2.3836, 2.3814, 1.1471>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2061, 0.3520, 1.2433>, <1.7129, 0.1416, 2.2000>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2061, 0.3520, 1.2433>, <3.2345, -0.0274, 1.2364>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.3836, 2.3814, 1.1471>, <3.3445, 4.9272, 2.1519>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[129] = union {
    object {AtomsGroup_129}
    object {BondsGroup_129}
}
// End of Section 129
        //Begin of Section 130  
#declare AtomsGroup_130 = union {
  sphere { <0.0689, -0.1119, 0.0515>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.4060, 0.0001, 0.0468>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.2053, 0.3541, 1.2425>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.3836, 2.3831, 1.1444>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.3485, 4.9268, 2.1567>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.9582, -0.0907, -0.8957>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.4877, -0.3116, -0.8677>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5129, 0.0221, 0.9697>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.7121, 0.1449, 2.1993>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2339, -0.0253, 1.2363>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_130 = union {
  cylinder { <0.0689, -0.1119, 0.0515>, <1.4060, 0.0001, 0.0468>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0689, -0.1119, 0.0515>, <-0.4877, -0.3116, -0.8677>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0689, -0.1119, 0.0515>, <-0.5129, 0.0221, 0.9697>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4060, 0.0001, 0.0468>, <2.2053, 0.3541, 1.2425>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4060, 0.0001, 0.0468>, <1.9582, -0.0907, -0.8957>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2053, 0.3541, 1.2425>, <2.3836, 2.3831, 1.1444>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2053, 0.3541, 1.2425>, <1.7121, 0.1449, 2.1993>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2053, 0.3541, 1.2425>, <3.2339, -0.0253, 1.2363>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.3836, 2.3831, 1.1444>, <3.3485, 4.9268, 2.1567>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[130] = union {
    object {AtomsGroup_130}
    object {BondsGroup_130}
}
// End of Section 130
        //Begin of Section 131  
#declare AtomsGroup_131 = union {
  sphere { <0.0683, -0.1138, 0.0513>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.4060, -0.0001, 0.0460>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.2048, 0.3563, 1.2416>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.3836, 2.3848, 1.1416>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.3524, 4.9263, 2.1615>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.9575, -0.0921, -0.8957>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.4878, -0.3155, -0.8673>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5133, 0.0208, 0.9696>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.7113, 0.1482, 2.1987>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2332, -0.0232, 1.2361>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_131 = union {
  cylinder { <0.0683, -0.1138, 0.0513>, <1.4060, -0.0001, 0.0460>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0683, -0.1138, 0.0513>, <-0.4878, -0.3155, -0.8673>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0683, -0.1138, 0.0513>, <-0.5133, 0.0208, 0.9696>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4060, -0.0001, 0.0460>, <2.2048, 0.3563, 1.2416>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4060, -0.0001, 0.0460>, <1.9575, -0.0921, -0.8957>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2048, 0.3563, 1.2416>, <2.3836, 2.3848, 1.1416>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2048, 0.3563, 1.2416>, <1.7113, 0.1482, 2.1987>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2048, 0.3563, 1.2416>, <3.2332, -0.0232, 1.2361>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.3836, 2.3848, 1.1416>, <3.3524, 4.9263, 2.1615>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[131] = union {
    object {AtomsGroup_131}
    object {BondsGroup_131}
}
// End of Section 131
        //Begin of Section 132  
#declare AtomsGroup_132 = union {
  sphere { <0.0681, -0.1155, 0.0515>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.4053, -0.0003, 0.0461>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.2039, 0.3583, 1.2408>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.3836, 2.3864, 1.1390>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.3560, 4.9257, 2.1661>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.9573, -0.0934, -0.8963>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.4880, -0.3194, -0.8670>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5135, 0.0196, 0.9693>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.7106, 0.1513, 2.1980>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2326, -0.0212, 1.2361>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_132 = union {
  cylinder { <0.0681, -0.1155, 0.0515>, <1.4053, -0.0003, 0.0461>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0681, -0.1155, 0.0515>, <-0.4880, -0.3194, -0.8670>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0681, -0.1155, 0.0515>, <-0.5135, 0.0196, 0.9693>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4053, -0.0003, 0.0461>, <2.2039, 0.3583, 1.2408>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4053, -0.0003, 0.0461>, <1.9573, -0.0934, -0.8963>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2039, 0.3583, 1.2408>, <2.3836, 2.3864, 1.1390>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2039, 0.3583, 1.2408>, <1.7106, 0.1513, 2.1980>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2039, 0.3583, 1.2408>, <3.2326, -0.0212, 1.2361>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.3836, 2.3864, 1.1390>, <3.3560, 4.9257, 2.1661>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[132] = union {
    object {AtomsGroup_132}
    object {BondsGroup_132}
}
// End of Section 132
        //Begin of Section 133  
#declare AtomsGroup_133 = union {
  sphere { <0.0680, -0.1173, 0.0513>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.4048, -0.0006, 0.0453>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.2035, 0.3605, 1.2400>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.3836, 2.3881, 1.1362>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.3598, 4.9250, 2.1708>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.9567, -0.0947, -0.8962>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.4882, -0.3234, -0.8666>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5140, 0.0184, 0.9693>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.7097, 0.1546, 2.1975>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2318, -0.0191, 1.2360>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_133 = union {
  cylinder { <0.0680, -0.1173, 0.0513>, <1.4048, -0.0006, 0.0453>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0680, -0.1173, 0.0513>, <-0.4882, -0.3234, -0.8666>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0680, -0.1173, 0.0513>, <-0.5140, 0.0184, 0.9693>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4048, -0.0006, 0.0453>, <2.2035, 0.3605, 1.2400>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4048, -0.0006, 0.0453>, <1.9567, -0.0947, -0.8962>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2035, 0.3605, 1.2400>, <2.3836, 2.3881, 1.1362>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2035, 0.3605, 1.2400>, <1.7097, 0.1546, 2.1975>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2035, 0.3605, 1.2400>, <3.2318, -0.0191, 1.2360>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.3836, 2.3881, 1.1362>, <3.3598, 4.9250, 2.1708>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[133] = union {
    object {AtomsGroup_133}
    object {BondsGroup_133}
}
// End of Section 133
        //Begin of Section 134  
#declare AtomsGroup_134 = union {
  sphere { <0.0677, -0.1191, 0.0516>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.4042, -0.0006, 0.0456>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.2025, 0.3626, 1.2392>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.3836, 2.3897, 1.1334>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.3636, 4.9243, 2.1756>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.9565, -0.0960, -0.8968>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.4884, -0.3274, -0.8663>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5142, 0.0171, 0.9690>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.7090, 0.1579, 2.1967>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2313, -0.0171, 1.2359>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_134 = union {
  cylinder { <0.0677, -0.1191, 0.0516>, <1.4042, -0.0006, 0.0456>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0677, -0.1191, 0.0516>, <-0.4884, -0.3274, -0.8663>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0677, -0.1191, 0.0516>, <-0.5142, 0.0171, 0.9690>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4042, -0.0006, 0.0456>, <2.2025, 0.3626, 1.2392>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4042, -0.0006, 0.0456>, <1.9565, -0.0960, -0.8968>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2025, 0.3626, 1.2392>, <2.3836, 2.3897, 1.1334>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2025, 0.3626, 1.2392>, <1.7090, 0.1579, 2.1967>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2025, 0.3626, 1.2392>, <3.2313, -0.0171, 1.2359>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.3836, 2.3897, 1.1334>, <3.3636, 4.9243, 2.1756>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[134] = union {
    object {AtomsGroup_134}
    object {BondsGroup_134}
}
// End of Section 134
        //Begin of Section 135  
#declare AtomsGroup_135 = union {
  sphere { <0.0676, -0.1208, 0.0513>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.4038, -0.0009, 0.0447>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.2022, 0.3648, 1.2384>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.3837, 2.3914, 1.1306>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.3672, 4.9235, 2.1802>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.9559, -0.0972, -0.8967>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.4885, -0.3314, -0.8658>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5147, 0.0160, 0.9690>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.7081, 0.1612, 2.1962>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2305, -0.0150, 1.2358>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_135 = union {
  cylinder { <0.0676, -0.1208, 0.0513>, <1.4038, -0.0009, 0.0447>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0676, -0.1208, 0.0513>, <-0.4885, -0.3314, -0.8658>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0676, -0.1208, 0.0513>, <-0.5147, 0.0160, 0.9690>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4038, -0.0009, 0.0447>, <2.2022, 0.3648, 1.2384>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4038, -0.0009, 0.0447>, <1.9559, -0.0972, -0.8967>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2022, 0.3648, 1.2384>, <2.3837, 2.3914, 1.1306>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2022, 0.3648, 1.2384>, <1.7081, 0.1612, 2.1962>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2022, 0.3648, 1.2384>, <3.2305, -0.0150, 1.2358>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.3837, 2.3914, 1.1306>, <3.3672, 4.9235, 2.1802>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[135] = union {
    object {AtomsGroup_135}
    object {BondsGroup_135}
}
// End of Section 135
        //Begin of Section 136  
#declare AtomsGroup_136 = union {
  sphere { <0.0672, -0.1226, 0.0514>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.4033, -0.0010, 0.0447>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.2014, 0.3669, 1.2376>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.3837, 2.3931, 1.1277>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.3709, 4.9226, 2.1849>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.9556, -0.0984, -0.8971>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.4886, -0.3354, -0.8654>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5149, 0.0148, 0.9687>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.7074, 0.1646, 2.1954>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2298, -0.0130, 1.2357>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_136 = union {
  cylinder { <0.0672, -0.1226, 0.0514>, <1.4033, -0.0010, 0.0447>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0672, -0.1226, 0.0514>, <-0.4886, -0.3354, -0.8654>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0672, -0.1226, 0.0514>, <-0.5149, 0.0148, 0.9687>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4033, -0.0010, 0.0447>, <2.2014, 0.3669, 1.2376>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4033, -0.0010, 0.0447>, <1.9556, -0.0984, -0.8971>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2014, 0.3669, 1.2376>, <2.3837, 2.3931, 1.1277>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2014, 0.3669, 1.2376>, <1.7074, 0.1646, 2.1954>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2014, 0.3669, 1.2376>, <3.2298, -0.0130, 1.2357>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.3837, 2.3931, 1.1277>, <3.3709, 4.9226, 2.1849>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[136] = union {
    object {AtomsGroup_136}
    object {BondsGroup_136}
}
// End of Section 136
        //Begin of Section 137  
#declare AtomsGroup_137 = union {
  sphere { <0.0667, -0.1245, 0.0512>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.4034, -0.0012, 0.0436>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.2009, 0.3692, 1.2366>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.3838, 2.3948, 1.1248>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.3746, 4.9216, 2.1897>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.9549, -0.0995, -0.8968>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.4886, -0.3395, -0.8648>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5155, 0.0136, 0.9688>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.7065, 0.1680, 2.1950>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2291, -0.0109, 1.2356>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_137 = union {
  cylinder { <0.0667, -0.1245, 0.0512>, <1.4034, -0.0012, 0.0436>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0667, -0.1245, 0.0512>, <-0.4886, -0.3395, -0.8648>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0667, -0.1245, 0.0512>, <-0.5155, 0.0136, 0.9688>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4034, -0.0012, 0.0436>, <2.2009, 0.3692, 1.2366>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4034, -0.0012, 0.0436>, <1.9549, -0.0995, -0.8968>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2009, 0.3692, 1.2366>, <2.3838, 2.3948, 1.1248>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2009, 0.3692, 1.2366>, <1.7065, 0.1680, 2.1950>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2009, 0.3692, 1.2366>, <3.2291, -0.0109, 1.2356>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.3838, 2.3948, 1.1248>, <3.3746, 4.9216, 2.1897>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[137] = union {
    object {AtomsGroup_137}
    object {BondsGroup_137}
}
// End of Section 137
        //Begin of Section 138  
#declare AtomsGroup_138 = union {
  sphere { <0.0663, -0.1260, 0.0516>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.4026, -0.0011, 0.0443>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.2000, 0.3710, 1.2361>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.3839, 2.3963, 1.1223>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.3777, 4.9207, 2.1938>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.9550, -0.1006, -0.8977>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.4888, -0.3430, -0.8646>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5155, 0.0125, 0.9683>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.7059, 0.1709, 2.1941>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2286, -0.0092, 1.2355>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_138 = union {
  cylinder { <0.0663, -0.1260, 0.0516>, <1.4026, -0.0011, 0.0443>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0663, -0.1260, 0.0516>, <-0.4888, -0.3430, -0.8646>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0663, -0.1260, 0.0516>, <-0.5155, 0.0125, 0.9683>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4026, -0.0011, 0.0443>, <2.2000, 0.3710, 1.2361>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4026, -0.0011, 0.0443>, <1.9550, -0.1006, -0.8977>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2000, 0.3710, 1.2361>, <2.3839, 2.3963, 1.1223>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2000, 0.3710, 1.2361>, <1.7059, 0.1709, 2.1941>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.2000, 0.3710, 1.2361>, <3.2286, -0.0092, 1.2355>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.3839, 2.3963, 1.1223>, <3.3777, 4.9207, 2.1938>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[138] = union {
    object {AtomsGroup_138}
    object {BondsGroup_138}
}
// End of Section 138
        //Begin of Section 139  
#declare AtomsGroup_139 = union {
  sphere { <0.0664, -0.1277, 0.0512>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.4024, -0.0014, 0.0431>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1997, 0.3731, 1.2352>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.3840, 2.3979, 1.1195>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.3811, 4.9197, 2.1982>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.9542, -0.1015, -0.8973>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.4888, -0.3468, -0.8641>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5161, 0.0114, 0.9686>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.7050, 0.1741, 2.1938>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2279, -0.0073, 1.2354>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_139 = union {
  cylinder { <0.0664, -0.1277, 0.0512>, <1.4024, -0.0014, 0.0431>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0664, -0.1277, 0.0512>, <-0.4888, -0.3468, -0.8641>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0664, -0.1277, 0.0512>, <-0.5161, 0.0114, 0.9686>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4024, -0.0014, 0.0431>, <2.1997, 0.3731, 1.2352>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4024, -0.0014, 0.0431>, <1.9542, -0.1015, -0.8973>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1997, 0.3731, 1.2352>, <2.3840, 2.3979, 1.1195>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1997, 0.3731, 1.2352>, <1.7050, 0.1741, 2.1938>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1997, 0.3731, 1.2352>, <3.2279, -0.0073, 1.2354>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.3840, 2.3979, 1.1195>, <3.3811, 4.9197, 2.1982>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[139] = union {
    object {AtomsGroup_139}
    object {BondsGroup_139}
}
// End of Section 139
        //Begin of Section 140  
#declare AtomsGroup_140 = union {
  sphere { <0.0659, -0.1293, 0.0516>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.4017, -0.0013, 0.0436>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1989, 0.3751, 1.2346>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.3842, 2.3995, 1.1167>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.3845, 4.9186, 2.2026>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.9542, -0.1026, -0.8981>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.4889, -0.3506, -0.8637>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5161, 0.0102, 0.9681>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.7044, 0.1774, 2.1929>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2272, -0.0053, 1.2354>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_140 = union {
  cylinder { <0.0659, -0.1293, 0.0516>, <1.4017, -0.0013, 0.0436>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0659, -0.1293, 0.0516>, <-0.4889, -0.3506, -0.8637>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0659, -0.1293, 0.0516>, <-0.5161, 0.0102, 0.9681>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4017, -0.0013, 0.0436>, <2.1989, 0.3751, 1.2346>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4017, -0.0013, 0.0436>, <1.9542, -0.1026, -0.8981>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1989, 0.3751, 1.2346>, <2.3842, 2.3995, 1.1167>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1989, 0.3751, 1.2346>, <1.7044, 0.1774, 2.1929>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1989, 0.3751, 1.2346>, <3.2272, -0.0053, 1.2354>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.3842, 2.3995, 1.1167>, <3.3845, 4.9186, 2.2026>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[140] = union {
    object {AtomsGroup_140}
    object {BondsGroup_140}
}
// End of Section 140
        //Begin of Section 141  
#declare AtomsGroup_141 = union {
  sphere { <0.0659, -0.1311, 0.0513>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.4016, -0.0015, 0.0426>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1984, 0.3773, 1.2336>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.3843, 2.4011, 1.1139>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.3878, 4.9174, 2.2071>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.9535, -0.1035, -0.8977>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.4889, -0.3545, -0.8632>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5167, 0.0091, 0.9683>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.7035, 0.1806, 2.1925>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2265, -0.0034, 1.2353>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_141 = union {
  cylinder { <0.0659, -0.1311, 0.0513>, <1.4016, -0.0015, 0.0426>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0659, -0.1311, 0.0513>, <-0.4889, -0.3545, -0.8632>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0659, -0.1311, 0.0513>, <-0.5167, 0.0091, 0.9683>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4016, -0.0015, 0.0426>, <2.1984, 0.3773, 1.2336>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4016, -0.0015, 0.0426>, <1.9535, -0.1035, -0.8977>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1984, 0.3773, 1.2336>, <2.3843, 2.4011, 1.1139>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1984, 0.3773, 1.2336>, <1.7035, 0.1806, 2.1925>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1984, 0.3773, 1.2336>, <3.2265, -0.0034, 1.2353>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.3843, 2.4011, 1.1139>, <3.3878, 4.9174, 2.2071>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[141] = union {
    object {AtomsGroup_141}
    object {BondsGroup_141}
}
// End of Section 141
        //Begin of Section 142  
#declare AtomsGroup_142 = union {
  sphere { <0.0655, -0.1327, 0.0516>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.4008, -0.0015, 0.0430>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1977, 0.3792, 1.2330>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.3845, 2.4027, 1.1110>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.3912, 4.9162, 2.2115>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.9534, -0.1046, -0.8985>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.4890, -0.3584, -0.8628>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5168, 0.0080, 0.9679>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.7028, 0.1840, 2.1916>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2259, -0.0015, 1.2352>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_142 = union {
  cylinder { <0.0655, -0.1327, 0.0516>, <1.4008, -0.0015, 0.0430>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0655, -0.1327, 0.0516>, <-0.4890, -0.3584, -0.8628>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0655, -0.1327, 0.0516>, <-0.5168, 0.0080, 0.9679>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4008, -0.0015, 0.0430>, <2.1977, 0.3792, 1.2330>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4008, -0.0015, 0.0430>, <1.9534, -0.1046, -0.8985>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1977, 0.3792, 1.2330>, <2.3845, 2.4027, 1.1110>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1977, 0.3792, 1.2330>, <1.7028, 0.1840, 2.1916>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1977, 0.3792, 1.2330>, <3.2259, -0.0015, 1.2352>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.3845, 2.4027, 1.1110>, <3.3912, 4.9162, 2.2115>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[142] = union {
    object {AtomsGroup_142}
    object {BondsGroup_142}
}
// End of Section 142
        //Begin of Section 143  
#declare AtomsGroup_143 = union {
  sphere { <0.0654, -0.1345, 0.0514>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.4007, -0.0016, 0.0420>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1971, 0.3815, 1.2320>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.3847, 2.4044, 1.1081>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.3945, 4.9149, 2.2160>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.9527, -0.1055, -0.8981>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.4891, -0.3623, -0.8623>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5173, 0.0068, 0.9681>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.7019, 0.1873, 2.1913>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2252, 0.0005, 1.2352>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_143 = union {
  cylinder { <0.0654, -0.1345, 0.0514>, <1.4007, -0.0016, 0.0420>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0654, -0.1345, 0.0514>, <-0.4891, -0.3623, -0.8623>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0654, -0.1345, 0.0514>, <-0.5173, 0.0068, 0.9681>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4007, -0.0016, 0.0420>, <2.1971, 0.3815, 1.2320>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4007, -0.0016, 0.0420>, <1.9527, -0.1055, -0.8981>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1971, 0.3815, 1.2320>, <2.3847, 2.4044, 1.1081>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1971, 0.3815, 1.2320>, <1.7019, 0.1873, 2.1913>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1971, 0.3815, 1.2320>, <3.2252, 0.0005, 1.2352>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.3847, 2.4044, 1.1081>, <3.3945, 4.9149, 2.2160>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[143] = union {
    object {AtomsGroup_143}
    object {BondsGroup_143}
}
// End of Section 143
        //Begin of Section 144  
#declare AtomsGroup_144 = union {
  sphere { <0.0650, -0.1362, 0.0517>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.4000, -0.0016, 0.0423>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1965, 0.3835, 1.2315>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.3849, 2.4060, 1.1052>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.3979, 4.9135, 2.2205>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.9526, -0.1065, -0.8988>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.4891, -0.3662, -0.8619>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5175, 0.0056, 0.9677>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.7012, 0.1908, 2.1903>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2244, 0.0024, 1.2351>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_144 = union {
  cylinder { <0.0650, -0.1362, 0.0517>, <1.4000, -0.0016, 0.0423>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0650, -0.1362, 0.0517>, <-0.4891, -0.3662, -0.8619>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0650, -0.1362, 0.0517>, <-0.5175, 0.0056, 0.9677>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4000, -0.0016, 0.0423>, <2.1965, 0.3835, 1.2315>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.4000, -0.0016, 0.0423>, <1.9526, -0.1065, -0.8988>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1965, 0.3835, 1.2315>, <2.3849, 2.4060, 1.1052>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1965, 0.3835, 1.2315>, <1.7012, 0.1908, 2.1903>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1965, 0.3835, 1.2315>, <3.2244, 0.0024, 1.2351>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.3849, 2.4060, 1.1052>, <3.3979, 4.9135, 2.2205>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[144] = union {
    object {AtomsGroup_144}
    object {BondsGroup_144}
}
// End of Section 144
        //Begin of Section 145  
#declare AtomsGroup_145 = union {
  sphere { <0.0650, -0.1379, 0.0515>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3998, -0.0017, 0.0414>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1958, 0.3858, 1.2303>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.3851, 2.4077, 1.1022>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.4012, 4.9121, 2.2250>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.9519, -0.1074, -0.8985>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.4891, -0.3701, -0.8614>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5180, 0.0045, 0.9679>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.7002, 0.1942, 2.1900>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2238, 0.0044, 1.2351>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_145 = union {
  cylinder { <0.0650, -0.1379, 0.0515>, <1.3998, -0.0017, 0.0414>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0650, -0.1379, 0.0515>, <-0.4891, -0.3701, -0.8614>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0650, -0.1379, 0.0515>, <-0.5180, 0.0045, 0.9679>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3998, -0.0017, 0.0414>, <2.1958, 0.3858, 1.2303>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3998, -0.0017, 0.0414>, <1.9519, -0.1074, -0.8985>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1958, 0.3858, 1.2303>, <2.3851, 2.4077, 1.1022>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1958, 0.3858, 1.2303>, <1.7002, 0.1942, 2.1900>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1958, 0.3858, 1.2303>, <3.2238, 0.0044, 1.2351>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.3851, 2.4077, 1.1022>, <3.4012, 4.9121, 2.2250>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[145] = union {
    object {AtomsGroup_145}
    object {BondsGroup_145}
}
// End of Section 145
        //Begin of Section 146  
#declare AtomsGroup_146 = union {
  sphere { <0.0645, -0.1396, 0.0518>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3991, -0.0016, 0.0417>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1952, 0.3877, 1.2299>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.3853, 2.4094, 1.0993>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.4044, 4.9106, 2.2294>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.9519, -0.1083, -0.8992>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.4891, -0.3740, -0.8609>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5181, 0.0033, 0.9676>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6996, 0.1976, 2.1890>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2230, 0.0063, 1.2350>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_146 = union {
  cylinder { <0.0645, -0.1396, 0.0518>, <1.3991, -0.0016, 0.0417>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0645, -0.1396, 0.0518>, <-0.4891, -0.3740, -0.8609>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0645, -0.1396, 0.0518>, <-0.5181, 0.0033, 0.9676>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3991, -0.0016, 0.0417>, <2.1952, 0.3877, 1.2299>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3991, -0.0016, 0.0417>, <1.9519, -0.1083, -0.8992>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1952, 0.3877, 1.2299>, <2.3853, 2.4094, 1.0993>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1952, 0.3877, 1.2299>, <1.6996, 0.1976, 2.1890>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1952, 0.3877, 1.2299>, <3.2230, 0.0063, 1.2350>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.3853, 2.4094, 1.0993>, <3.4044, 4.9106, 2.2294>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[146] = union {
    object {AtomsGroup_146}
    object {BondsGroup_146}
}
// End of Section 146
        //Begin of Section 147  
#declare AtomsGroup_147 = union {
  sphere { <0.0646, -0.1413, 0.0516>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3990, -0.0017, 0.0408>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1946, 0.3900, 1.2287>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.3856, 2.4110, 1.0964>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.4077, 4.9091, 2.2338>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.9511, -0.1092, -0.8988>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.4892, -0.3779, -0.8604>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5186, 0.0021, 0.9678>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6986, 0.2010, 2.1888>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2225, 0.0082, 1.2350>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_147 = union {
  cylinder { <0.0646, -0.1413, 0.0516>, <1.3990, -0.0017, 0.0408>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0646, -0.1413, 0.0516>, <-0.4892, -0.3779, -0.8604>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0646, -0.1413, 0.0516>, <-0.5186, 0.0021, 0.9678>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3990, -0.0017, 0.0408>, <2.1946, 0.3900, 1.2287>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3990, -0.0017, 0.0408>, <1.9511, -0.1092, -0.8988>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1946, 0.3900, 1.2287>, <2.3856, 2.4110, 1.0964>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1946, 0.3900, 1.2287>, <1.6986, 0.2010, 2.1888>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1946, 0.3900, 1.2287>, <3.2225, 0.0082, 1.2350>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.3856, 2.4110, 1.0964>, <3.4077, 4.9091, 2.2338>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[147] = union {
    object {AtomsGroup_147}
    object {BondsGroup_147}
}
// End of Section 147
        //Begin of Section 148  
#declare AtomsGroup_148 = union {
  sphere { <0.0640, -0.1429, 0.0519>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3983, -0.0016, 0.0411>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1940, 0.3920, 1.2284>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.3858, 2.4127, 1.0934>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.4108, 4.9075, 2.2381>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.9511, -0.1101, -0.8996>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.4891, -0.3817, -0.8599>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5187, 0.0009, 0.9674>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6980, 0.2045, 2.1877>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2216, 0.0102, 1.2350>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_148 = union {
  cylinder { <0.0640, -0.1429, 0.0519>, <1.3983, -0.0016, 0.0411>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0640, -0.1429, 0.0519>, <-0.4891, -0.3817, -0.8599>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0640, -0.1429, 0.0519>, <-0.5187, 0.0009, 0.9674>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3983, -0.0016, 0.0411>, <2.1940, 0.3920, 1.2284>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3983, -0.0016, 0.0411>, <1.9511, -0.1101, -0.8996>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1940, 0.3920, 1.2284>, <2.3858, 2.4127, 1.0934>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1940, 0.3920, 1.2284>, <1.6980, 0.2045, 2.1877>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1940, 0.3920, 1.2284>, <3.2216, 0.0102, 1.2350>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.3858, 2.4127, 1.0934>, <3.4108, 4.9075, 2.2381>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[148] = union {
    object {AtomsGroup_148}
    object {BondsGroup_148}
}
// End of Section 148
        //Begin of Section 149  
#declare AtomsGroup_149 = union {
  sphere { <0.0643, -0.1446, 0.0518>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3982, -0.0018, 0.0401>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1933, 0.3943, 1.2271>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.3861, 2.4143, 1.0905>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.4139, 4.9059, 2.2424>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.9504, -0.1108, -0.8991>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.4891, -0.3855, -0.8594>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5193, -0.0002, 0.9677>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6970, 0.2078, 2.1876>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2211, 0.0120, 1.2350>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_149 = union {
  cylinder { <0.0643, -0.1446, 0.0518>, <1.3982, -0.0018, 0.0401>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0643, -0.1446, 0.0518>, <-0.4891, -0.3855, -0.8594>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0643, -0.1446, 0.0518>, <-0.5193, -0.0002, 0.9677>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3982, -0.0018, 0.0401>, <2.1933, 0.3943, 1.2271>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3982, -0.0018, 0.0401>, <1.9504, -0.1108, -0.8991>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1933, 0.3943, 1.2271>, <2.3861, 2.4143, 1.0905>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1933, 0.3943, 1.2271>, <1.6970, 0.2078, 2.1876>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1933, 0.3943, 1.2271>, <3.2211, 0.0120, 1.2350>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.3861, 2.4143, 1.0905>, <3.4139, 4.9059, 2.2424>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[149] = union {
    object {AtomsGroup_149}
    object {BondsGroup_149}
}
// End of Section 149
        //Begin of Section 150  
#declare AtomsGroup_150 = union {
  sphere { <0.0635, -0.1462, 0.0521>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3975, -0.0016, 0.0406>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1928, 0.3961, 1.2269>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.3864, 2.4159, 1.0876>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.4169, 4.9043, 2.2466>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.9504, -0.1117, -0.8999>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.4891, -0.3892, -0.8589>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5192, -0.0014, 0.9672>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6964, 0.2112, 2.1864>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2202, 0.0140, 1.2349>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_150 = union {
  cylinder { <0.0635, -0.1462, 0.0521>, <1.3975, -0.0016, 0.0406>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0635, -0.1462, 0.0521>, <-0.4891, -0.3892, -0.8589>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0635, -0.1462, 0.0521>, <-0.5192, -0.0014, 0.9672>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3975, -0.0016, 0.0406>, <2.1928, 0.3961, 1.2269>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3975, -0.0016, 0.0406>, <1.9504, -0.1117, -0.8999>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1928, 0.3961, 1.2269>, <2.3864, 2.4159, 1.0876>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1928, 0.3961, 1.2269>, <1.6964, 0.2112, 2.1864>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1928, 0.3961, 1.2269>, <3.2202, 0.0140, 1.2349>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.3864, 2.4159, 1.0876>, <3.4169, 4.9043, 2.2466>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[150] = union {
    object {AtomsGroup_150}
    object {BondsGroup_150}
}
// End of Section 150
        //Begin of Section 151  
#declare AtomsGroup_151 = union {
  sphere { <0.0639, -0.1477, 0.0519>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3975, -0.0017, 0.0395>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1921, 0.3984, 1.2255>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.3867, 2.4175, 1.0848>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.4199, 4.9027, 2.2507>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.9496, -0.1124, -0.8993>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.4891, -0.3928, -0.8584>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5199, -0.0024, 0.9676>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6953, 0.2145, 2.1864>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2198, 0.0157, 1.2349>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_151 = union {
  cylinder { <0.0639, -0.1477, 0.0519>, <1.3975, -0.0017, 0.0395>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0639, -0.1477, 0.0519>, <-0.4891, -0.3928, -0.8584>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0639, -0.1477, 0.0519>, <-0.5199, -0.0024, 0.9676>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3975, -0.0017, 0.0395>, <2.1921, 0.3984, 1.2255>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3975, -0.0017, 0.0395>, <1.9496, -0.1124, -0.8993>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1921, 0.3984, 1.2255>, <2.3867, 2.4175, 1.0848>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1921, 0.3984, 1.2255>, <1.6953, 0.2145, 2.1864>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1921, 0.3984, 1.2255>, <3.2198, 0.0157, 1.2349>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.3867, 2.4175, 1.0848>, <3.4199, 4.9027, 2.2507>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[151] = union {
    object {AtomsGroup_151}
    object {BondsGroup_151}
}
// End of Section 151
        //Begin of Section 152  
#declare AtomsGroup_152 = union {
  sphere { <0.0630, -0.1493, 0.0523>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3968, -0.0015, 0.0401>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1917, 0.4002, 1.2255>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.3870, 2.4191, 1.0820>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.4228, 4.9010, 2.2548>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.9497, -0.1132, -0.9003>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.4890, -0.3965, -0.8578>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5198, -0.0036, 0.9671>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6948, 0.2179, 2.1852>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2189, 0.0176, 1.2349>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_152 = union {
  cylinder { <0.0630, -0.1493, 0.0523>, <1.3968, -0.0015, 0.0401>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0630, -0.1493, 0.0523>, <-0.4890, -0.3965, -0.8578>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0630, -0.1493, 0.0523>, <-0.5198, -0.0036, 0.9671>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3968, -0.0015, 0.0401>, <2.1917, 0.4002, 1.2255>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3968, -0.0015, 0.0401>, <1.9497, -0.1132, -0.9003>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1917, 0.4002, 1.2255>, <2.3870, 2.4191, 1.0820>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1917, 0.4002, 1.2255>, <1.6948, 0.2179, 2.1852>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1917, 0.4002, 1.2255>, <3.2189, 0.0176, 1.2349>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.3870, 2.4191, 1.0820>, <3.4228, 4.9010, 2.2548>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[152] = union {
    object {AtomsGroup_152}
    object {BondsGroup_152}
}
// End of Section 152
        //Begin of Section 153  
#declare AtomsGroup_153 = union {
  sphere { <0.0638, -0.1508, 0.0521>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3966, -0.0017, 0.0390>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1910, 0.4024, 1.2240>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.3873, 2.4206, 1.0793>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.4255, 4.8993, 2.2586>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.9489, -0.1138, -0.8996>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.4891, -0.4000, -0.8575>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5205, -0.0047, 0.9676>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6938, 0.2209, 2.1853>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2185, 0.0192, 1.2349>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_153 = union {
  cylinder { <0.0638, -0.1508, 0.0521>, <1.3966, -0.0017, 0.0390>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0638, -0.1508, 0.0521>, <-0.4891, -0.4000, -0.8575>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0638, -0.1508, 0.0521>, <-0.5205, -0.0047, 0.9676>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3966, -0.0017, 0.0390>, <2.1910, 0.4024, 1.2240>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3966, -0.0017, 0.0390>, <1.9489, -0.1138, -0.8996>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1910, 0.4024, 1.2240>, <2.3873, 2.4206, 1.0793>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1910, 0.4024, 1.2240>, <1.6938, 0.2209, 2.1853>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1910, 0.4024, 1.2240>, <3.2185, 0.0192, 1.2349>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.3873, 2.4206, 1.0793>, <3.4255, 4.8993, 2.2586>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[153] = union {
    object {AtomsGroup_153}
    object {BondsGroup_153}
}
// End of Section 153
        //Begin of Section 154  
#declare AtomsGroup_154 = union {
  sphere { <0.0632, -0.1524, 0.0523>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3960, -0.0016, 0.0392>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1905, 0.4042, 1.2238>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.3876, 2.4222, 1.0764>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.4284, 4.8975, 2.2627>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.9489, -0.1146, -0.9003>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.4890, -0.4035, -0.8568>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5205, -0.0058, 0.9673>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6931, 0.2243, 2.1842>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2176, 0.0211, 1.2349>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_154 = union {
  cylinder { <0.0632, -0.1524, 0.0523>, <1.3960, -0.0016, 0.0392>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0632, -0.1524, 0.0523>, <-0.4890, -0.4035, -0.8568>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0632, -0.1524, 0.0523>, <-0.5205, -0.0058, 0.9673>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3960, -0.0016, 0.0392>, <2.1905, 0.4042, 1.2238>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3960, -0.0016, 0.0392>, <1.9489, -0.1146, -0.9003>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1905, 0.4042, 1.2238>, <2.3876, 2.4222, 1.0764>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1905, 0.4042, 1.2238>, <1.6931, 0.2243, 2.1842>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1905, 0.4042, 1.2238>, <3.2176, 0.0211, 1.2349>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.3876, 2.4222, 1.0764>, <3.4284, 4.8975, 2.2627>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[154] = union {
    object {AtomsGroup_154}
    object {BondsGroup_154}
}
// End of Section 154
        //Begin of Section 155  
#declare AtomsGroup_155 = union {
  sphere { <0.0631, -0.1541, 0.0525>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3957, -0.0015, 0.0388>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1897, 0.4065, 1.2227>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.3880, 2.4239, 1.0732>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.4315, 4.8955, 2.2671>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.9484, -0.1154, -0.9003>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.4889, -0.4076, -0.8563>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5208, -0.0071, 0.9673>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6922, 0.2281, 2.1837>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2170, 0.0231, 1.2350>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_155 = union {
  cylinder { <0.0631, -0.1541, 0.0525>, <1.3957, -0.0015, 0.0388>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0631, -0.1541, 0.0525>, <-0.4889, -0.4076, -0.8563>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0631, -0.1541, 0.0525>, <-0.5208, -0.0071, 0.9673>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3957, -0.0015, 0.0388>, <2.1897, 0.4065, 1.2227>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3957, -0.0015, 0.0388>, <1.9484, -0.1154, -0.9003>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1897, 0.4065, 1.2227>, <2.3880, 2.4239, 1.0732>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1897, 0.4065, 1.2227>, <1.6922, 0.2281, 2.1837>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1897, 0.4065, 1.2227>, <3.2170, 0.0231, 1.2350>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.3880, 2.4239, 1.0732>, <3.4315, 4.8955, 2.2671>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[155] = union {
    object {AtomsGroup_155}
    object {BondsGroup_155}
}
// End of Section 155
        //Begin of Section 156  
#declare AtomsGroup_156 = union {
  sphere { <0.0628, -0.1558, 0.0525>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3951, -0.0014, 0.0386>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1893, 0.4087, 1.2222>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.3884, 2.4257, 1.0700>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.4346, 4.8935, 2.2715>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.9481, -0.1161, -0.9006>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.4888, -0.4115, -0.8557>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5210, -0.0083, 0.9672>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6913, 0.2318, 2.1828>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2161, 0.0251, 1.2350>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_156 = union {
  cylinder { <0.0628, -0.1558, 0.0525>, <1.3951, -0.0014, 0.0386>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0628, -0.1558, 0.0525>, <-0.4888, -0.4115, -0.8557>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0628, -0.1558, 0.0525>, <-0.5210, -0.0083, 0.9672>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3951, -0.0014, 0.0386>, <2.1893, 0.4087, 1.2222>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3951, -0.0014, 0.0386>, <1.9481, -0.1161, -0.9006>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1893, 0.4087, 1.2222>, <2.3884, 2.4257, 1.0700>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1893, 0.4087, 1.2222>, <1.6913, 0.2318, 2.1828>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1893, 0.4087, 1.2222>, <3.2161, 0.0251, 1.2350>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.3884, 2.4257, 1.0700>, <3.4346, 4.8935, 2.2715>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[156] = union {
    object {AtomsGroup_156}
    object {BondsGroup_156}
}
// End of Section 156
        //Begin of Section 157  
#declare AtomsGroup_157 = union {
  sphere { <0.0627, -0.1575, 0.0527>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3949, -0.0014, 0.0382>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1884, 0.4111, 1.2210>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.3888, 2.4274, 1.0668>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.4377, 4.8914, 2.2759>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.9477, -0.1168, -0.9006>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.4888, -0.4155, -0.8551>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5214, -0.0096, 0.9673>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6904, 0.2355, 2.1824>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2155, 0.0270, 1.2350>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_157 = union {
  cylinder { <0.0627, -0.1575, 0.0527>, <1.3949, -0.0014, 0.0382>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0627, -0.1575, 0.0527>, <-0.4888, -0.4155, -0.8551>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0627, -0.1575, 0.0527>, <-0.5214, -0.0096, 0.9673>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3949, -0.0014, 0.0382>, <2.1884, 0.4111, 1.2210>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3949, -0.0014, 0.0382>, <1.9477, -0.1168, -0.9006>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1884, 0.4111, 1.2210>, <2.3888, 2.4274, 1.0668>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1884, 0.4111, 1.2210>, <1.6904, 0.2355, 2.1824>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1884, 0.4111, 1.2210>, <3.2155, 0.0270, 1.2350>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.3888, 2.4274, 1.0668>, <3.4377, 4.8914, 2.2759>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[157] = union {
    object {AtomsGroup_157}
    object {BondsGroup_157}
}
// End of Section 157
        //Begin of Section 158  
#declare AtomsGroup_158 = union {
  sphere { <0.0623, -0.1592, 0.0528>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3943, -0.0013, 0.0381>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1880, 0.4131, 1.2207>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.3892, 2.4291, 1.0636>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.4407, 4.8893, 2.2802>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.9474, -0.1176, -0.9010>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.4886, -0.4193, -0.8544>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5216, -0.0109, 0.9671>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6896, 0.2392, 2.1814>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2145, 0.0291, 1.2350>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_158 = union {
  cylinder { <0.0623, -0.1592, 0.0528>, <1.3943, -0.0013, 0.0381>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0623, -0.1592, 0.0528>, <-0.4886, -0.4193, -0.8544>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0623, -0.1592, 0.0528>, <-0.5216, -0.0109, 0.9671>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3943, -0.0013, 0.0381>, <2.1880, 0.4131, 1.2207>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3943, -0.0013, 0.0381>, <1.9474, -0.1176, -0.9010>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1880, 0.4131, 1.2207>, <2.3892, 2.4291, 1.0636>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1880, 0.4131, 1.2207>, <1.6896, 0.2392, 2.1814>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1880, 0.4131, 1.2207>, <3.2145, 0.0291, 1.2350>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.3892, 2.4291, 1.0636>, <3.4407, 4.8893, 2.2802>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[158] = union {
    object {AtomsGroup_158}
    object {BondsGroup_158}
}
// End of Section 158
        //Begin of Section 159  
#declare AtomsGroup_159 = union {
  sphere { <0.0627, -0.1608, 0.0530>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3941, -0.0012, 0.0377>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1870, 0.4155, 1.2192>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.3896, 2.4308, 1.0605>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.4436, 4.8871, 2.2845>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.9469, -0.1182, -0.9008>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.4887, -0.4231, -0.8540>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5220, -0.0121, 0.9673>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6885, 0.2427, 2.1812>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2142, 0.0308, 1.2351>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_159 = union {
  cylinder { <0.0627, -0.1608, 0.0530>, <1.3941, -0.0012, 0.0377>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0627, -0.1608, 0.0530>, <-0.4887, -0.4231, -0.8540>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0627, -0.1608, 0.0530>, <-0.5220, -0.0121, 0.9673>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3941, -0.0012, 0.0377>, <2.1870, 0.4155, 1.2192>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3941, -0.0012, 0.0377>, <1.9469, -0.1182, -0.9008>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1870, 0.4155, 1.2192>, <2.3896, 2.4308, 1.0605>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1870, 0.4155, 1.2192>, <1.6885, 0.2427, 2.1812>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1870, 0.4155, 1.2192>, <3.2142, 0.0308, 1.2351>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.3896, 2.4308, 1.0605>, <3.4436, 4.8871, 2.2845>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[159] = union {
    object {AtomsGroup_159}
    object {BondsGroup_159}
}
// End of Section 159
        //Begin of Section 160  
#declare AtomsGroup_160 = union {
  sphere { <0.0623, -0.1624, 0.0532>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.3935, -0.0011, 0.0377>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.1866, 0.4175, 1.2188>, atom_rad_2
    pigment { color rgb <.3,.3,.3> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <2.3900, 2.4324, 1.0573>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.4464, 4.8850, 2.2886>, atom_rad_def
    pigment { color rgb <0.5,0,0> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.9467, -0.1189, -0.9012>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.4885, -0.4268, -0.8534>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <-0.5221, -0.0133, 0.9672>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <1.6878, 0.2463, 2.1803>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
  sphere { <3.2133, 0.0328, 1.2352>, atom_rad_h
    pigment { color rgb <1,1,1> filter trans_atom }
    finish { AtomFinish }
  }
}
#declare BondsGroup_160 = union {
  cylinder { <0.0623, -0.1624, 0.0532>, <1.3935, -0.0011, 0.0377>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0623, -0.1624, 0.0532>, <-0.4885, -0.4268, -0.8534>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <0.0623, -0.1624, 0.0532>, <-0.5221, -0.0133, 0.9672>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3935, -0.0011, 0.0377>, <2.1866, 0.4175, 1.2188>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <1.3935, -0.0011, 0.0377>, <1.9467, -0.1189, -0.9012>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1866, 0.4175, 1.2188>, <2.3900, 2.4324, 1.0573>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1866, 0.4175, 1.2188>, <1.6878, 0.2463, 2.1803>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.1866, 0.4175, 1.2188>, <3.2133, 0.0328, 1.2352>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
  cylinder { <2.3900, 2.4324, 1.0573>, <3.4464, 4.8850, 2.2886>, bond_rad
    pigment { color rgb <0.7, 0.7, 0.7> filter trans_bd }
    finish { BdFinish }
  }
}
// Combine Atoms, Bonds and Mesh 
#declare combined[160] = union {
    object {AtomsGroup_160}
    object {BondsGroup_160}
}
// End of Section 160
        