/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18023e720 */

void FUN_18023e720(int param_1)

{
  undefined8 uVar1;
  undefined1 local_38 [48];
  
  uVar1 = FUN_18023e770();
  FUN_18023e780(local_38,*(undefined4 *)(&DAT_1802db928 + (longlong)param_1 * 4),uVar1,
                (&PTR_s_device_or_resource_busy_1802db8f0)[param_1]);
                    /* WARNING: Subroutine does not return */
  FUN_18026d5b0(local_38,&DAT_18038e668);
}

