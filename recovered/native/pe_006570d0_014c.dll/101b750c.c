/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101b750c */

undefined4 * __fastcall FUN_101b750c(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = (undefined4 *)FUN_100fa1fa(0x44);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  *(undefined8 *)((int)puVar1 + 0x2d) = 0;
  *(undefined1 *)((int)puVar1 + 0x35) = 1;
  puVar1[0xe] = 0x80;
  *(undefined8 *)(puVar1 + 0xf) = DAT_10302a50;
  FUN_101b75f6(puVar1,0x1c,"%s",param_1);
  puVar1[7] = param_2;
  puVar1[8] = param_3;
  if (param_3 == 0) {
    puVar1[0xc] = 0;
  }
  else {
    iVar2 = *(int *)(param_3 + 0x24);
    puVar1[0xc] = iVar2;
    if (iVar2 == *(int *)(param_3 + 0x28)) {
      if (iVar2 == 0) {
        iVar3 = 8;
      }
      else {
        iVar3 = iVar2 / 2 + iVar2;
      }
      iVar4 = iVar2 + 1;
      if (iVar2 + 1 < iVar3) {
        iVar4 = iVar3;
      }
      iVar3 = FUN_100fa1fa(iVar4 * 4);
      if (*(int *)(param_3 + 0x2c) != 0) {
        FUN_1025b2d0(iVar3,*(int *)(param_3 + 0x2c),*(int *)(param_3 + 0x24) << 2);
        FUN_100fa2cb(*(undefined4 *)(param_3 + 0x2c));
      }
      *(int *)(param_3 + 0x2c) = iVar3;
      *(int *)(param_3 + 0x28) = iVar4;
      iVar2 = *(int *)(param_3 + 0x24);
    }
    else {
      iVar3 = *(int *)(param_3 + 0x2c);
    }
    *(undefined4 **)(iVar3 + iVar2 * 4) = puVar1;
    *(int *)(param_3 + 0x24) = *(int *)(param_3 + 0x24) + 1;
  }
  return puVar1;
}

