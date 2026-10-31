/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022d330 */

void FUN_1022d330(int param_1)

{
  undefined4 uVar1;
  undefined1 local_18 [20];
  
  uVar1 = FUN_1022d370((&PTR_s_device_or_resource_busy_102b6b00)[param_1]);
  FUN_1022d380(*(undefined4 *)(&DAT_102b6b1c + param_1 * 4),uVar1);
                    /* WARNING: Subroutine does not return */
  FUN_102586e0(local_18,&DAT_1035f784);
}

