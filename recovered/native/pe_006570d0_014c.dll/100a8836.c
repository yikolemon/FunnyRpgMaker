/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a8836 */

byte * __thiscall FUN_100a8836(int param_1,byte *param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  undefined1 auStack_38 [16];
  byte bStack_28;
  uint local_18;
  
  local_18 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  iVar2 = 0;
  if (*(char *)(param_1 + 0x50) == '\x01') {
    uVar1 = *(uint *)(param_1 + 0x10);
    if (((uVar1 >> 10 & 1) == 0) ||
       ((*(int *)(param_1 + 0x14) != -0x5ffffff4 && (*(int *)(param_1 + 0x14) != -0x5ffffffd)))) {
      bVar3 = (byte)((uVar1 & 0x10) >> 4);
      goto LAB_100a8915;
    }
    iVar2 = 0;
    bVar3 = 0;
    if ((*(byte *)(param_1 + 0x4c) & 1) == 0) goto LAB_100a8915;
    if (*(uint *)(param_1 + 0x34) < 8) {
      iVar2 = param_1 + 0x20;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x20);
    }
    bVar3 = 0;
    iVar2 = FUN_10228d20(iVar2,auStack_38,3,uVar1);
    if (iVar2 < 0x40) {
      if (iVar2 < 5) {
        if (1 < iVar2 - 2U) {
          if (iVar2 == 0) {
            bVar3 = (bStack_28 & 0x10) >> 4;
            iVar2 = 0;
          }
          goto LAB_100a8915;
        }
      }
      else if (iVar2 == 5) {
        if ((*(byte *)(param_1 + 0x4c) & 2) == 0) {
          iVar2 = 5;
          goto LAB_100a8913;
        }
      }
      else if (iVar2 != 0x35) goto LAB_100a8915;
    }
    else if (iVar2 < 0xa1) {
      if ((iVar2 != 0x40) && (iVar2 != 0x7b)) goto LAB_100a8915;
    }
    else if ((iVar2 != 0xa1) && (iVar2 != 0x10b)) goto LAB_100a8915;
    iVar2 = 0;
  }
LAB_100a8913:
  bVar3 = 0;
LAB_100a8915:
  *param_2 = bVar3;
  *(int *)(param_2 + 4) = iVar2;
  if (DAT_10388d00 != (local_18 ^ (uint)&stack0xfffffffc)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return param_2;
}

