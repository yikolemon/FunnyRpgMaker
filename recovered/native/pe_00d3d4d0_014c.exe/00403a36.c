/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00403a36 */

uint * __cdecl
FUN_00403a36(uint *param_1,undefined4 param_2,int *param_3,uint param_4,uint param_5,uint param_6,
            uint param_7,int param_8,undefined4 param_9)

{
  uint ****ppppuVar1;
  uint ***local_3c [4];
  uint local_2c;
  uint local_28;
  uint *local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)local_3c;
  local_18 = &LAB_00406f40;
  local_1c = ExceptionList;
  local_24 = param_1;
  local_14 = 0;
  ExceptionList = &local_1c;
  ppppuVar1 = local_3c;
  if (param_8 != 0) {
    FUN_00403c80(&param_4,(uint *)0x504c93,2);
    ppppuVar1 = (uint ****)local_20;
  }
  local_20 = (undefined1 *)ppppuVar1;
  (**(code **)(*param_3 + 8))(local_3c,param_2);
  local_14 = 1;
  ppppuVar1 = local_3c;
  if (0xf < local_28) {
    ppppuVar1 = (uint ****)local_3c[0];
  }
  FUN_00403c80(&param_4,(uint *)ppppuVar1,local_2c);
  local_14 = 0xffffffff;
  FUN_0040230a((int *)local_3c);
  local_24[4] = 0;
  local_24[5] = 0;
  *local_24 = 0;
  local_24[1] = 0;
  local_24[2] = 0;
  local_24[3] = 0;
  *local_24 = param_4;
  local_24[1] = param_5;
  local_24[2] = param_6;
  local_24[3] = param_7;
  *(ulonglong *)(local_24 + 4) = CONCAT44(param_9,param_8);
  param_8 = 0;
  param_9 = 0xf;
  param_4 = param_4 & 0xffffff00;
  FUN_0040230a((int *)&param_4);
  ExceptionList = local_1c;
  return param_1;
}

