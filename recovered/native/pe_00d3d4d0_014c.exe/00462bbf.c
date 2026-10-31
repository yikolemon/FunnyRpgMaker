/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00462bbf */

void __fastcall
FUN_00462bbf(int param_1,int param_2,int *param_3,int *param_4,char *param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint local_2c;
  undefined1 local_28 [4];
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_2c;
  uVar1 = FUN_00462cbd(param_2);
  if ((((byte)uVar1 & *(char *)(param_1 + 8) == '\0') == 1) && (*param_5 == '\0')) {
    iVar2 = FUN_00462cc7(param_2,0);
    iVar3 = FUN_0046282a(*(int *)(param_1 + 0xb0));
    *param_4 = iVar3 + iVar2;
  }
  if (*(char *)(*(int *)(param_1 + 0xb0) + 0x224) == '\0') {
    if (1 < uVar1) {
      uVar4 = uVar1 & 1;
      local_2c = uVar1;
      do {
        iVar2 = FUN_00462cc7(param_2,uVar4);
        local_24 = iVar2 + param_6;
        iVar3 = FUN_00462cc7(param_2,uVar4 + 1);
        param_6 = iVar3 + iVar2 + param_6;
        local_28[0] = 0;
        local_1c = 0;
        local_18 = 0;
        local_20 = param_6;
        FUN_00463d3b(param_3,(uint *)local_28);
        uVar4 = uVar4 + 2;
      } while (uVar4 < local_2c);
    }
    FUN_00462a8f(param_2);
  }
  *param_5 = '\x01';
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_2c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_2c);
}

