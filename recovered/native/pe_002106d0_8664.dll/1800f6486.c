/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f6486 */

bool FUN_1800f6486(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  DWORD DVar4;
  uint *puVar5;
  longlong lVar6;
  bool bVar7;
  
  puVar5 = (uint *)FUN_1800188ac(param_1 + 4);
  LOCK();
  bVar7 = (*puVar5 & 1) == 0;
  *puVar5 = *puVar5 | 1;
  UNLOCK();
  if (bVar7) {
    DVar4 = GetCurrentThreadId();
    *(DWORD *)(param_1 + 0x18) = DVar4;
    lVar1 = param_1 + 8;
    lVar6 = FUN_1800f60e2(lVar1);
    while( true ) {
      plVar3 = (longlong *)FUN_1800188ac(param_1 + 0x10);
      *plVar3 = lVar6;
      WakeByAddressAll(param_1 + 0x10);
      if (lVar6 == 0) break;
      lVar2 = *(longlong *)(lVar6 + 8);
      *(undefined8 *)(lVar6 + 8) = 0;
      if (lVar2 != 0) {
        *(undefined8 *)(lVar2 + 0x10) = 0;
      }
      FUN_1800f61a6(lVar1);
      (**(code **)(lVar6 + 0x18))(lVar6);
      lVar6 = FUN_1800f60e2(lVar1);
    }
    FUN_1800f61a6(lVar1,0);
  }
  return bVar7;
}

