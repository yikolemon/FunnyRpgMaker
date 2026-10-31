/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102295f0 */

void FUN_102295f0(HANDLE param_1,undefined4 *param_2)

{
  BOOL BVar1;
  undefined1 local_30 [16];
  undefined4 local_20;
  undefined4 local_1c;
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  BVar1 = GetFileInformationByHandleEx(param_1,FileBasicInfo,local_30,0x28);
  if (BVar1 != 0) {
    *param_2 = local_20;
    param_2[1] = local_1c;
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  GetLastError();
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

