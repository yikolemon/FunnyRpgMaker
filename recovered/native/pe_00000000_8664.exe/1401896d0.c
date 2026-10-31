/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401896d0 */

void FUN_1401896d0(int param_1)

{
  undefined8 uVar1;
  undefined1 local_38 [48];
  
  uVar1 = FUN_140189720();
  FUN_140189730(local_38,*(undefined4 *)(&DAT_140e628a8 + (longlong)param_1 * 4),uVar1,
                (&PTR_s_device_or_resource_busy_140e62870)[param_1]);
                    /* WARNING: Subroutine does not return */
  FUN_14018f0a0(local_38,&DAT_140ee3a48);
}

