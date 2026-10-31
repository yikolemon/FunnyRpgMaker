/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00483bb0 */

void FUN_00483bb0(int param_1)

{
  undefined **ppuVar1;
  uint *puVar2;
  int local_18 [5];
  
  puVar2 = (uint *)(&PTR_s_device_or_resource_busy_004ccc60)[param_1];
  ppuVar1 = FUN_00483bf0();
  FUN_00483c00(local_18,*(undefined4 *)(&DAT_004ccc7c + param_1 * 4),(int *)ppuVar1,puVar2);
                    /* WARNING: Subroutine does not return */
  FUN_00484ff0(local_18,&DAT_00509854);
}

