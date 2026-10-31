/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404b0404 */

bool FUN_1404b0404(longlong *param_1)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong local_res8;
  longlong local_res10 [3];
  
  if ((*(uint *)((longlong)param_1 + 0x14) >> 3 & 1) == 0) {
    if ((((*(uint *)((longlong)param_1 + 0x14) & 0xc0) == 0) || (*param_1 != param_1[1])) &&
       (lVar3 = FUN_1404aa3c0((int)param_1[3]), lVar3 != -1)) {
      local_res10[0] = 0;
      iVar2 = (*(code *)s_IsDebuggerPresent_14059e1ac._4_8_)(lVar3,0,local_res10,1);
      if (iVar2 != 0) {
        local_res8 = 0;
        iVar2 = (*(code *)s_GetLogicalProcessorInformationEx_14059df28._24_8_)(lVar3,&local_res8);
        if (iVar2 != 0) {
          return local_res10[0] == local_res8;
        }
      }
    }
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}

