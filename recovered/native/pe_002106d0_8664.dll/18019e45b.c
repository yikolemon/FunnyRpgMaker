/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019e45b */

bool FUN_18019e45b(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  puVar2 = (undefined8 *)FUN_1800fe7f8(0x58);
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[2] = &LAB_18019eb51;
  puVar2[3] = &LAB_18019eb68;
  puVar2[4] = FUN_18019eb7c;
  iVar1 = FUN_1801cd38c(puVar2 + 1,puVar2);
  if (iVar1 == 0) {
    FUN_1801cd42c(*puVar2,&local_34,&local_38,&local_3c);
    FUN_180055d3d(s_FreeType_180404650,0x30,"FreeType (%d.%d.%d; %d.%d.%d)",2,0xe,3,local_34,
                  local_38,local_3c);
    FUN_1801d1578(*puVar2);
    *(undefined8 **)(param_1 + 0x2c8) = puVar2;
  }
  else {
    FUN_180146568(puVar2);
  }
  return iVar1 == 0;
}

