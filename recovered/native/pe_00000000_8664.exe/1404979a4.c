/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404979a4 */

ulonglong thunk_FUN_140497ce8(FILE *param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if (param_1 == (FILE *)0x0) {
    *(undefined1 *)(param_2 + 0x30) = 1;
    *(undefined4 *)(param_2 + 0x2c) = 0x16;
    FUN_1404a2100(0,0,0,0,0,param_2);
  }
  else {
    uVar2 = _fileno(param_1);
    if (*(int *)&param_1->_base < 0) {
      *(undefined4 *)&param_1->_base = 0;
    }
    lVar3 = thunk_FUN_1404a8be0(uVar2,0,1,param_2);
    if (-1 < lVar3) {
      if (((ulonglong)param_1->_base & 0xc000000000) == 0) {
        return lVar3 - *(int *)&param_1->_base;
      }
      uVar6 = (longlong)param_1->_ptr - *(longlong *)&param_1->_cnt;
      uVar4 = (ulonglong)(uVar2 & 0x3f);
      lVar5 = (longlong)(int)uVar2 >> 6;
      cVar1 = *(char *)((&DAT_1406328d0)[lVar5] + 0x39 + uVar4 * 0x48);
      if (((ulonglong)param_1->_base & 0x300000000) == 0) {
        if ((*(uint *)((longlong)&param_1->_base + 4) >> 2 & 1) == 0) {
          *(undefined1 *)(param_2 + 0x30) = 1;
          *(undefined4 *)(param_2 + 0x2c) = 0x16;
          return 0xffffffffffffffff;
        }
      }
      else {
        if ((cVar1 == '\x01') &&
           ((*(byte *)((&DAT_1406328d0)[lVar5] + 0x3d + uVar4 * 0x48) & 2) != 0)) {
          uVar4 = FUN_140497a04(param_1,lVar3,param_2);
          return uVar4;
        }
        if (*(char *)((&DAT_1406328d0)[lVar5] + 0x38 + uVar4 * 0x48) < '\0') {
          lVar5 = FUN_1404979ac(*(undefined8 *)&param_1->_cnt,param_1->_ptr,
                                CONCAT71(0x1406328,cVar1));
          uVar6 = uVar6 + lVar5;
        }
      }
      if (lVar3 == 0) {
        return uVar6;
      }
      if (((ulonglong)param_1->_base & 0x100000000) == 0) {
        if (cVar1 == '\x01') {
          uVar6 = uVar6 >> 1;
        }
        return uVar6 + lVar3;
      }
      uVar4 = FUN_140497b8c(param_1,lVar3,uVar6,param_2);
      return uVar4;
    }
  }
  return 0xffffffffffffffff;
}

