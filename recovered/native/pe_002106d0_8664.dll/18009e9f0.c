/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18009e9f0 */

undefined1 * FUN_18009e9f0(undefined1 *param_1,int *param_2,undefined4 *param_3)

{
  undefined1 local_d8 [56];
  undefined8 local_a0;
  char *local_98;
  char *local_90;
  char *local_88;
  undefined8 local_80;
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined1 *local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  *param_1 = 0;
  *(int *)(param_1 + 4) = *param_2;
  param_1[10] = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = *param_3;
  param_1[0x10] = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  local_38 = param_1 + 0x10;
  local_30 = param_1 + 0x58;
  local_28 = param_1;
  FUN_180073356();
  if (*param_2 != 0) {
    return param_1;
  }
  local_a0 = 0x60000000a1;
  local_98 = 
  "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\WolfTL\\WolfTL\\WolfRPG\\FileCoder.hpp"
  ;
  local_90 = "__cdecl FileCoder::FileCoder(const Mode &, const WolfFileType &)";
  FUN_180072a20(local_58);
  local_88 = "{}FileCoder: READ mode requires a filename or buffer.";
  local_80 = 0x35;
  FUN_1800729a4(local_78,&local_88,local_58);
  FUN_18006f972(local_d8,local_78);
                    /* WARNING: Subroutine does not return */
  FUN_18026d5b0(local_d8,&DAT_1803a63b0);
}

