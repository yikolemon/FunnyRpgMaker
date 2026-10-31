/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00463f3e */

void __fastcall FUN_00463f3e(int *param_1,int param_2,int param_3)

{
  char cVar1;
  undefined8 local_38;
  int local_30;
  int local_2c;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_38;
  local_18 = 1;
  local_38 = *(undefined8 *)(param_1 + 0xb73);
  cVar1 = FUN_00463d78((int)(param_1 + 2));
  if (cVar1 == '\0') {
    FUN_00462d54(param_1,param_1[0xb75],param_1[0xb76]);
  }
  FUN_0046428c(param_1,(int)(param_1 + 2),&local_30,param_2,param_3);
  (**(code **)param_1[1])((undefined4 *)param_1[1],&local_38);
  param_1[0xb74] = local_2c;
  param_1[0xb73] = local_30;
  param_1[0xb6d] = param_2;
  param_1[0xb6e] = param_3;
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_38)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_38);
}

