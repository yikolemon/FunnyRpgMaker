/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102756d3 */

void FUN_102756d3(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = FUN_1027bc60(param_2,0x40,param_1,param_4);
  if (iVar1 == 0) {
    uVar3 = 0x3f;
    iVar4 = iVar1;
    iVar5 = iVar1;
    uVar2 = __acrt_get_utf8_acp_compatibility_codepage();
    FUN_10274283(uVar2,iVar1,param_2,param_4,param_3,uVar3,iVar4,iVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}

