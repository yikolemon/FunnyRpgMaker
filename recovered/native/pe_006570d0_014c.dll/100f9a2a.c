/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f9a2a */

void __thiscall FUN_100f9a2a(int param_1,float param_2,float param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (*(char *)(param_1 + 0xbad) == '\x01') {
    iVar1 = *(int *)(param_1 + 0xb0);
    if ((((param_2 != 0.0) || (NAN(param_2))) || (param_3 != 0.0)) || (NAN(param_3))) {
      iVar2 = *(int *)(iVar1 + 0x1480);
      *(int *)(iVar1 + 0x1480) = iVar2 + 1;
      iVar4 = *(int *)(iVar1 + 0x1464);
      uVar3 = *(undefined4 *)(iVar1 + 0x147c);
      if (iVar4 == *(int *)(iVar1 + 0x1468)) {
        if (iVar4 == 0) {
          iVar5 = 8;
        }
        else {
          iVar5 = iVar4 / 2 + iVar4;
        }
        iVar6 = iVar4 + 1;
        if (iVar4 + 1 < iVar5) {
          iVar6 = iVar5;
        }
        iVar5 = FUN_100fa1fa(iVar6 * 0x1c);
        if (*(int *)(iVar1 + 0x146c) != 0) {
          FUN_1025b2d0(iVar5,*(int *)(iVar1 + 0x146c),*(int *)(iVar1 + 0x1464) * 0x1c);
          FUN_100fa2cb(*(undefined4 *)(iVar1 + 0x146c));
        }
        *(int *)(iVar1 + 0x146c) = iVar5;
        *(int *)(iVar1 + 0x1468) = iVar6;
        iVar4 = *(int *)(iVar1 + 0x1464);
      }
      else {
        iVar5 = *(int *)(iVar1 + 0x146c);
      }
      iVar4 = iVar4 * 0x1c;
      *(undefined4 *)(iVar5 + iVar4) = 2;
      *(undefined4 *)(iVar5 + 4 + iVar4) = 1;
      *(int *)(iVar5 + 8 + iVar4) = iVar2;
      *(float *)(iVar5 + 0xc + iVar4) = param_2;
      *(float *)(iVar5 + 0x10 + iVar4) = param_3;
      *(undefined4 *)(iVar5 + 0x14 + iVar4) = uVar3;
      *(undefined4 *)(iVar5 + 0x18 + iVar4) = 0;
      *(int *)(iVar1 + 0x1464) = *(int *)(iVar1 + 0x1464) + 1;
    }
  }
  return;
}

