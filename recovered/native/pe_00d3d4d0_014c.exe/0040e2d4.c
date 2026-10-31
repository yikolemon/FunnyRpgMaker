/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040e2d4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong __cdecl FUN_0040e2d4(uint *param_1,uint *param_2,ulonglong param_3)

{
  char *pcVar1;
  uint uVar2;
  bool bVar3;
  ulonglong uVar4;
  uint *local_2c;
  uint local_20;
  uint uStack_1c;
  
  uStack_1c = (uint)(param_3 >> 0x20);
  local_20 = (uint)param_3;
  if ((longlong)param_3 < 0) {
    if (param_1 == param_2) {
      return CONCAT44(0x84,param_1);
    }
    *(undefined1 *)param_1 = 0x2d;
    uVar4 = CONCAT44(uStack_1c & _UNK_004a88c4,local_20 & _DAT_004a88c0);
    local_2c = (uint *)((int)param_1 + 1);
  }
  else {
    local_2c = param_1;
    uVar4 = param_3;
  }
  uVar2 = (uint)(uVar4 >> 0x20);
  if ((~uVar2 & 0x7ff00000) == 0) {
    if ((int)uVar4 == 0 && (uVar4 & 0xfffff00000000) == 0) {
      uVar2 = 3;
      pcVar1 = &DAT_00503b60;
    }
    else if (((byte)(param_3 >> 0x3f) & ((int)uVar4 == 0 && (uVar2 & 0xfffff) == 0x80000)) == 0) {
      bVar3 = (uVar4 & 0x8000000000000) == 0;
      pcVar1 = &DAT_0050366f;
      if (bVar3) {
        pcVar1 = "nan(snan)";
      }
      uVar2 = 3;
      if (bVar3) {
        uVar2 = 9;
      }
    }
    else {
      uVar2 = 8;
      pcVar1 = "nan(ind)";
    }
    uVar4 = CONCAT44(0x84,param_2);
    if ((int)uVar2 <= (int)param_2 - (int)local_2c) {
      FUN_004878c0(local_2c,(uint *)pcVar1,uVar2);
      uVar4 = (ulonglong)((int)local_2c + uVar2);
    }
  }
  else {
    uVar4 = FUN_0040e3e6(local_2c,param_2,uVar4,0);
  }
  return uVar4;
}

