/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10286205 */

byte * FUN_10286205(byte *param_1,uint param_2,int param_3,byte param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  int iVar5;
  int local_8;
  
  uVar1 = param_2 & 3;
  *param_1 = 0;
  if (uVar1 == 0) {
    uVar3 = 0x80000000;
  }
  else if (uVar1 == 1) {
    uVar3 = 0x40000000;
    if ((param_2 & 8) != 0 && (param_2 & 0x70000) != 0) {
      uVar3 = 0xc0000000;
    }
  }
  else if (uVar1 == 2) {
    uVar3 = 0xc0000000;
  }
  else {
    puVar2 = (undefined4 *)FUN_10268ffd();
    *puVar2 = 0x16;
    FUN_10273ea8();
    uVar3 = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 4) = uVar3;
  uVar4 = decode_open_create_flags(param_2);
  *(ulong *)(param_1 + 8) = uVar4;
  if (param_3 == 0x10) {
    uVar1 = 0;
  }
  else if (param_3 == 0x20) {
    uVar1 = 1;
  }
  else if (param_3 == 0x30) {
    uVar1 = 2;
  }
  else if (param_3 == 0x40) {
    uVar1 = 3;
  }
  else if (param_3 == 0x80) {
    uVar1 = (uint)(*(int *)(param_1 + 4) == -0x80000000);
  }
  else {
    puVar2 = (undefined4 *)FUN_10268ffd();
    *puVar2 = 0x16;
    FUN_10273ea8();
    uVar1 = 0xffffffff;
  }
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(uint *)(param_1 + 0xc) = uVar1;
  param_1[0x10] = 0x80;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  if ((char)param_2 < '\0') {
    *param_1 = *param_1 | 0x10;
  }
  if ((param_2 & 0x8000) == 0) {
    if ((param_2 & 0x74000) == 0) {
      iVar5 = FUN_102878f1(&local_8);
      if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      if (local_8 == 0x8000) goto LAB_10286301;
    }
    *param_1 = *param_1 | 0x80;
  }
LAB_10286301:
  if (((param_2 & 0x100) != 0) && (-1 < (char)(~(byte)DAT_103a54b8 & param_4))) {
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
  if ((param_2 & 0x1000) != 0) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 0x100;
  }
  if ((param_2 & 0x2000) != 0) {
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

