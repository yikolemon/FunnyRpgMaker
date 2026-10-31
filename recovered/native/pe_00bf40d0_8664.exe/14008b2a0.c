/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14008b2a0 */

void FUN_14008b2a0(int param_1)

{
  undefined **ppuVar1;
  longlong local_38 [6];
  
  ppuVar1 = FUN_14008b2f0();
  FUN_14008b300(local_38,*(undefined4 *)(&DAT_1400db988 + (longlong)param_1 * 4),ppuVar1,
                (undefined8 *)(&PTR_s_device_or_resource_busy_1400db950)[param_1]);
                    /* WARNING: Subroutine does not return */
  FUN_14008c800(local_38,&DAT_1401215e8);
}

