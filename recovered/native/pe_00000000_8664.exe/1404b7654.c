/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404b7654 */

byte * FUN_1404b7654(byte *param_1,uint param_2,int param_3,byte param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  uVar4 = param_2 & 3;
  uVar5 = 0xffffffff;
  if (uVar4 == 0) {
    iVar2 = -0x80000000;
  }
  else if (uVar4 == 1) {
    iVar2 = (-(uint)((param_2 & 0x70000) != 0 && (param_2 & 8) != 0) & 0x80000000) + 0x40000000;
  }
  else if (uVar4 == 2) {
    iVar2 = -0x40000000;
  }
  else {
    puVar3 = (undefined4 *)FUN_14048fb3c();
    *puVar3 = 0x16;
    FUN_1404a1f20();
    iVar2 = -1;
  }
  *(int *)(param_1 + 4) = iVar2;
  uVar4 = param_2 & 0x700;
  if (uVar4 != 0) {
    if (uVar4 == 0x100) {
      uVar1 = 4;
      goto LAB_1404b7745;
    }
    if (uVar4 == 0x200) {
LAB_1404b7732:
      uVar1 = 5;
      goto LAB_1404b7745;
    }
    if (uVar4 == 0x300) {
      uVar1 = 2;
      goto LAB_1404b7745;
    }
    if (uVar4 != 0x400) {
      if (uVar4 != 0x500) {
        if (uVar4 == 0x600) goto LAB_1404b7732;
        if (uVar4 != 0x700) {
          puVar3 = (undefined4 *)FUN_14048fb3c();
          *puVar3 = 0x16;
          FUN_1404a1f20();
          uVar1 = 0xffffffff;
          goto LAB_1404b7745;
        }
      }
      uVar1 = 1;
      goto LAB_1404b7745;
    }
  }
  uVar1 = 3;
LAB_1404b7745:
  *(undefined4 *)(param_1 + 8) = uVar1;
  if (param_3 == 0x10) {
    uVar5 = 0;
  }
  else if (param_3 == 0x20) {
    uVar5 = 1;
  }
  else if (param_3 == 0x30) {
    uVar5 = 2;
  }
  else if (param_3 == 0x40) {
    uVar5 = 3;
  }
  else if (param_3 == 0x80) {
    uVar5 = (uint)(*(int *)(param_1 + 4) == -0x80000000);
  }
  else {
    puVar3 = (undefined4 *)FUN_14048fb3c();
    *puVar3 = 0x16;
    FUN_1404a1f20();
  }
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(uint *)(param_1 + 0xc) = uVar5;
  param_1[0x10] = 0x80;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  if ((char)param_2 < '\0') {
    *param_1 = *param_1 | 0x10;
  }
  if ((param_2 & 0x8000) == 0) {
    if (((param_2 & 0x74000) == 0) && (iVar2 = FUN_1404b8c4c(), iVar2 != 0)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    *param_1 = *param_1 | 0x80;
  }
  if (((param_2 & 0x100) != 0) && (-1 < (char)(~(byte)DAT_140632d98 & param_4))) {
    param_1[0x10] = 1;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
  }
  if ((param_2 & 0x40) != 0) {
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x4000000;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10000;
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 4;
  }
  if ((param_2 >> 0xc & 1) != 0) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x100;
  }
  if ((param_2 >> 0xd & 1) != 0) {
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x2000000;
  }
  if ((param_2 & 0x20) == 0) {
    if ((param_2 & 0x10) != 0) {
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x10000000;
    }
  }
  else {
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x8000000;
  }
  return param_1;
}

