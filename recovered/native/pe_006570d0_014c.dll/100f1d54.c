/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f1d54 */

bool __fastcall FUN_100f1d54(int param_1)

{
  int iVar1;
  uint *puVar2;
  DWORD DVar3;
  int iVar4;
  int *piVar5;
  bool bVar6;
  
  puVar2 = (uint *)FUN_10018d26(param_1 + 4);
  LOCK();
  bVar6 = (*puVar2 & 1) == 0;
  *puVar2 = *puVar2 | 1;
  UNLOCK();
  if (bVar6) {
    DVar3 = GetCurrentThreadId();
    *(DWORD *)(param_1 + 0x10) = DVar3;
    iVar4 = FUN_100f1a24();
    while( true ) {
      piVar5 = (int *)FUN_10018d26(param_1 + 0xc);
      *piVar5 = iVar4;
      WakeByAddressAll(param_1 + 0xc);
      if (iVar4 == 0) break;
      iVar1 = *(int *)(iVar4 + 4);
      *(undefined4 *)(iVar4 + 4) = 0;
      if (iVar1 != 0) {
        *(undefined4 *)(iVar1 + 8) = 0;
      }
      FUN_100f1ad0(iVar1);
      (**(code **)(iVar4 + 0xc))(iVar4);
      iVar4 = FUN_100f1a24();
    }
    FUN_100f1ad0(0);
  }
  return bVar6;
}

