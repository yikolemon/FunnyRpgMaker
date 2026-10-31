/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400dd9a0 */

void FUN_1400dd9a0(int param_1)

{
  undefined8 uVar1;
  undefined1 local_38 [48];
  
  uVar1 = FUN_1400dd9f0();
  FUN_1400dda00(local_38,*(undefined4 *)(&DAT_140164ec0 + (longlong)param_1 * 4),uVar1,
                (&PTR_s_device_or_resource_busy_140164e88)[param_1]);
                    /* WARNING: Subroutine does not return */
  FUN_140106270(local_38,&DAT_14017a898);
}

