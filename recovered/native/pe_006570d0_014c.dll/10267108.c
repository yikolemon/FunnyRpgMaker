/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10267108 */

undefined8 FUN_10267108(undefined4 param_1)

{
  undefined8 uVar1;
  int in_stack_00000018;
  int in_stack_0000001c;
  undefined1 *in_stack_00000020;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined1 local_30 [44];
  
  FUN_1025eb50(param_1);
  FUN_10266ffd(&stack0x00000008);
  uVar1 = FUN_102675cc(local_30);
  FUN_1025ebb0();
  if ((in_stack_00000020 != (undefined1 *)0x0) && (in_stack_00000018 == 0 && in_stack_0000001c == 0)
     ) {
    *in_stack_00000020 = 0;
  }
  return uVar1;
}

