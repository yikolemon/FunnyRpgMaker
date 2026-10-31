/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140097d30 */

undefined8 FUN_140097d30(int *param_1,longlong *param_2)

{
  WCHAR *pWVar1;
  uint uVar2;
  uint uVar3;
  
  if ((((byte)param_1[5] & 3) == 2) && ((param_1[5] & 0xc0U) != 0)) {
    uVar3 = *param_1 - param_1[2];
    param_1[4] = 0;
    pWVar1 = *(WCHAR **)(param_1 + 2);
    *(WCHAR **)param_1 = pWVar1;
    if (0 < (int)uVar3) {
      uVar2 = FUN_1400a5bb4((longlong)param_1);
      uVar2 = FUN_1400ab30c(uVar2,pWVar1,uVar3,param_2);
      if (uVar3 != uVar2) {
        LOCK();
        param_1[5] = param_1[5] | 0x10;
        UNLOCK();
        return 0xffffffff;
      }
      if (((uint)param_1[5] >> 2 & 1) != 0) {
        LOCK();
        param_1[5] = param_1[5] & 0xfffffffd;
        UNLOCK();
      }
    }
  }
  return 0;
}

