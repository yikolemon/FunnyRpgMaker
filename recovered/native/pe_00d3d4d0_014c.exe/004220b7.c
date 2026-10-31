/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004220b7 */

int __fastcall
FUN_004220b7(int *param_1,int param_2,undefined4 param_3,uint param_4,byte *param_5,int *param_6)

{
  int iVar1;
  uint uVar2;
  uint local_34 [4];
  undefined4 local_24;
  int *local_20;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)local_34;
  iVar1 = *param_1;
  local_20 = (int *)0x0;
  local_34[0] = 0;
  if (param_5 != (byte *)0x0) {
    local_20 = FUN_0041d39b((int)param_1,param_5);
    if (local_20 == (int *)0x0) {
      FUN_0041c607(iVar1,param_2);
      uVar2 = 0xb;
      goto LAB_0042214f;
    }
    local_34[0] = 8;
  }
  uVar2 = FUN_00422174(param_1,param_2,param_3,&local_24);
  if (uVar2 == 0) {
    local_34[0] = local_34[0] | 2;
    uVar2 = FUN_0041e08f(param_1,local_34,param_4,param_6,'\0');
  }
  else {
    FUN_0041c607(iVar1,param_2);
  }
LAB_0042214f:
  if (DAT_0050e8c0 == (local_14 ^ (uint)local_34)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)local_34);
}

