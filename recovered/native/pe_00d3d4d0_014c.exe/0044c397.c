/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0044c397 */

void __fastcall
FUN_0044c397(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int *param_4,uint param_5,
            undefined2 param_6,undefined2 param_7)

{
  int iVar1;
  int local_14;
  uint local_10;
  
  local_10 = DAT_0050e8c0 ^ (uint)&local_14;
  iVar1 = *param_4;
  *(undefined8 *)(param_1 + 5) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[7] = param_2;
  param_1[8] = param_3;
  *param_1 = param_4;
  *(undefined2 *)(param_1 + 9) = param_6;
  *(undefined2 *)((int)param_1 + 0x26) = param_7;
  iVar1 = FUN_0041efcd(iVar1,4,0,param_5,0,&local_14);
  param_1[4] = iVar1;
  if (local_14 == 0) {
    param_1[6] = param_5;
    param_1[5] = iVar1;
  }
  if (DAT_0050e8c0 == (local_10 ^ (uint)&local_14)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_10 ^ (uint)&local_14);
}

