/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004170c5 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong __cdecl
FUN_004170c5(uint *param_1,uint *param_2,ulonglong param_3,int param_4,size_t param_5)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  ulonglong uVar5;
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
    uVar5 = CONCAT44(uStack_1c & _UNK_004a88c4,local_20 & _DAT_004a88c0);
    local_2c = (uint *)((int)param_1 + 1);
  }
  else {
    local_2c = param_1;
    uVar5 = param_3;
  }
  uVar2 = (uint)(uVar5 >> 0x20);
  uVar3 = (uint)uVar5;
  if ((~uVar2 & 0x7ff00000) == 0) {
    if (uVar3 == 0 && (uVar5 & 0xfffff00000000) == 0) {
      uVar3 = 3;
      pcVar1 = &DAT_00503b60;
    }
    else if (((byte)(param_3 >> 0x3f) & (uVar3 == 0 && (uVar2 & 0xfffff) == 0x80000)) == 0) {
      bVar4 = (uVar5 & 0x8000000000000) == 0;
      pcVar1 = &DAT_0050366f;
      if (bVar4) {
        pcVar1 = "nan(snan)";
      }
      uVar3 = 3;
      if (bVar4) {
        uVar3 = 9;
      }
    }
    else {
      uVar3 = 8;
      pcVar1 = "nan(ind)";
    }
    uVar5 = CONCAT44(0x84,param_2);
    if ((int)uVar3 <= (int)param_2 - (int)local_2c) {
      FUN_004878c0(local_2c,(uint *)pcVar1,uVar3);
      uVar5 = (ulonglong)((int)local_2c + uVar3);
    }
  }
  else if (param_4 == 3) {
    uVar5 = FUN_00417309(local_2c,param_2,uVar5,param_5);
  }
  else if (param_4 == 2) {
    uVar5 = FUN_0041728c((byte *)local_2c,(byte *)param_2,uVar5,param_5);
  }
  else if (param_4 == 1) {
    uVar5 = FUN_00417245((byte *)local_2c,(byte *)param_2,uVar5,param_5);
  }
  else {
    uVar5 = FUN_0041757b((char *)local_2c,(int)param_2,uVar3,uVar2,param_5);
  }
  return uVar5;
}

