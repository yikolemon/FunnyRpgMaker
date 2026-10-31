/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801c004f */

undefined8 FUN_1801c004f(void)

{
  int iVar1;
  char *_Str;
  size_t sVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined1 auStack_a8 [32];
  uint local_88;
  undefined8 local_78;
  ulonglong local_70;
  undefined1 local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_a8;
  uVar6 = 0;
  iVar7 = 1;
  local_78 = FUN_1801c06f9("<ROOT>",1,0);
  do {
    local_88 = (uint)uVar6 & 1;
    local_70 = uVar6;
    FUN_1801c07f5(local_68,0x1c,"%s %d",(&PTR_s_Apple_180328850)[uVar6 >> 1]);
    iVar7 = iVar7 + 1;
    _Str = (char *)FUN_1801c06f9(local_68,iVar7,local_78);
    sVar2 = strlen(_Str);
    if (0 < (int)sVar2) {
      iVar4 = 0;
      do {
        FUN_1801c07f5(local_68,0x1c,"Child %d",iVar4);
        lVar3 = FUN_1801c06f9(local_68,iVar7 + 1,_Str);
        *(undefined1 *)(lVar3 + 0x3c) = 1;
        iVar1 = iVar7 + 1;
        if (iVar4 == 0) {
          FUN_1801c07f5(local_68,0x1c,"Sub-child %d",0);
          lVar3 = FUN_1801c06f9(local_68,iVar7 + 2,lVar3);
          *(undefined1 *)(lVar3 + 0x3c) = 1;
          iVar1 = iVar7 + 2;
        }
        iVar7 = iVar1;
        iVar4 = iVar4 + 1;
      } while ((int)sVar2 != iVar4);
    }
    uVar5 = (int)local_70 + 1;
    uVar6 = (ulonglong)uVar5;
  } while (uVar5 != 0x14);
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_a8)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_a8);
  }
  return local_78;
}

