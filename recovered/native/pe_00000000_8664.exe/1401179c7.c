/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401179c7 */

bool FUN_1401179c7(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  puVar2 = (undefined8 *)FUN_140077ab4(0x58);
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
  puVar2[2] = &LAB_1401180bd;
  puVar2[3] = &LAB_1401180d4;
  puVar2[4] = FUN_1401180e8;
  iVar1 = FUN_14012c360(puVar2 + 1,puVar2);
  if (iVar1 == 0) {
    FUN_14012c400(*puVar2,&local_34,&local_38,&local_3c);
    FUN_1400117d5(s_FreeType_140f1c650,0x30,"FreeType (%d.%d.%d; %d.%d.%d)",2,0xe,3,local_34,
                  local_38,local_3c);
    FUN_14013054c(*puVar2);
    *(undefined8 **)(param_1 + 0x2c8) = puVar2;
  }
  else {
    FUN_1400bf498(puVar2);
  }
  return iVar1 == 0;
}

