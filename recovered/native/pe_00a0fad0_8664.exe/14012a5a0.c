/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14012a5a0 */

longlong * FUN_14012a5a0(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  
  plVar5 = (longlong *)(DAT_140354b18 + 0x18);
  plVar1 = plVar5 + (longlong)DAT_140354b10 + -3;
  do {
    if (plVar5 == plVar1) {
LAB_14012a61c:
      *param_1 = 0;
      return param_1;
    }
    lVar4 = *plVar5;
    if (lVar4 == 0) {
      lVar4 = _calloc_base(1);
      *plVar5 = lVar4;
      FUN_1401212e0(0);
      if (*plVar5 != 0) {
        *(undefined4 *)(*plVar5 + 0x18) = 0xffffffff;
        InitializeCriticalSectionEx((LPCRITICAL_SECTION)(*plVar5 + 0x30),4000,0);
        lVar4 = *plVar5;
        LOCK();
        *(uint *)(lVar4 + 0x14) = *(uint *)(lVar4 + 0x14) | 0x2000;
        UNLOCK();
        FUN_14010b32c(lVar4);
LAB_14012a638:
        *param_1 = lVar4;
        return param_1;
      }
      goto LAB_14012a61c;
    }
    if ((*(uint *)(lVar4 + 0x14) >> 0xd & 1) == 0) {
      FUN_14010b32c(lVar4);
      uVar3 = *(uint *)(lVar4 + 0x14);
      do {
        LOCK();
        uVar2 = *(uint *)(lVar4 + 0x14);
        bVar6 = uVar3 == uVar2;
        if (bVar6) {
          *(uint *)(lVar4 + 0x14) = uVar3 | 0x2000;
          uVar2 = uVar3;
        }
        uVar3 = uVar2;
        UNLOCK();
      } while (!bVar6);
      if ((~(byte)(uVar3 >> 0xd) & 1) != 0) goto LAB_14012a638;
      FUN_14010b338(lVar4);
    }
    plVar5 = plVar5 + 1;
  } while( true );
}

