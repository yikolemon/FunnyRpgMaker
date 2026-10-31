/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400ab9e8 */

longlong * FUN_1400ab9e8(longlong *param_1,void *param_2)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  char local_d8 [128];
  longlong *local_58;
  undefined8 local_50;
  
  local_50 = 0xfffffffffffffffe;
  uVar4 = 4;
  local_58 = param_1;
  while( true ) {
    if (0x7f < uVar4) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      return param_1;
    }
    local_d8[0] = '\0';
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    FUN_14008c1de(param_1,(ulonglong)uVar4,local_d8);
    thunk_FUN_1400498e2(param_2,(ulonglong)uVar4 + (longlong)param_2,*local_58);
    lVar1 = *local_58;
    if (lVar1 == local_58[1]) {
      bVar6 = false;
    }
    else {
      iVar2 = (int)local_58[1];
      uVar5 = iVar2 - (uint)lVar1;
      if (0x80 < uVar5) {
        FUN_140008fe8(local_d8,"Key is too long");
                    /* WARNING: Subroutine does not return */
        FUN_140106270(local_d8,&DAT_14017a4d8);
      }
      if (uVar5 != 0) {
        FUN_140135ff0(local_d8,lVar1,(ulonglong)(iVar2 + ~(uint)lVar1) + 1);
      }
      uVar3 = 0;
      do {
        local_d8[uVar3] =
             (char)((uVar3 & 0xffffffff) / (ulonglong)uVar5) +
             *(char *)(lVar1 + (uVar3 & 0xffffffff) % (ulonglong)uVar5);
        uVar3 = uVar3 + 1;
      } while (uVar3 != 0x80);
      iVar2 = memcmp(local_d8,param_2,0x80);
      bVar6 = iVar2 == 0;
    }
    param_1 = local_58;
    if (bVar6) break;
    FUN_140016e5c(local_58);
    uVar4 = uVar4 + 1;
  }
  return local_58;
}

