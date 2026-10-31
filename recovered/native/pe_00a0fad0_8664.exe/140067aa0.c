/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140067aa0 */

undefined8
FUN_140067aa0(undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 ***pppuVar1;
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined8 **local_58 [3];
  ulonglong local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  FUN_14000169c(local_d8,&DAT_1401728de);
  FUN_14006eaec(local_b8,param_3);
  FUN_14000169c(local_78,"parse_error");
  FUN_140063b62(local_98,local_78,param_2);
  FUN_14006e95b(local_58,local_98,"parse error",local_b8,&DAT_140172797,local_d8,param_4);
  FUN_1400017de(local_98);
  FUN_1400017de(local_78);
  FUN_1400017de(local_b8);
  FUN_1400017de(local_d8);
  pppuVar1 = local_58;
  if (0xf < local_40) {
    pppuVar1 = (undefined8 ***)local_58[0];
  }
  FUN_14006ebb4(param_1,param_2,*param_3,pppuVar1);
  FUN_1400017de(local_58);
  return param_1;
}

