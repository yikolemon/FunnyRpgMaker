/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140288ab0 */

void FUN_140288ab0(undefined1 *param_1,longlong *param_2)

{
  ulonglong uVar1;
  undefined1 local_78 [56];
  undefined1 local_40 [32];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_14028989e();
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((longlong *)(param_1 + 0x30) != param_2) {
    FUN_1402898f2(param_1 + 0x30,*param_2,param_2[1] - *param_2);
  }
  *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x30);
  uVar1 = *(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x30);
  if (uVar1 >> 0x20 == 0) {
    *(int *)(param_1 + 0x2c) = (int)uVar1;
    *param_1 = 1;
    return;
  }
  FUN_140213362(local_40," file");
  FUN_1402897fa(local_78,local_40);
                    /* WARNING: Subroutine does not return */
  FUN_14047ea80(local_78,0x1405b7910);
}

