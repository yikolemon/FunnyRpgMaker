/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140095144 */

ulonglong FUN_140095144(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  longlong lVar2;
  int iVar3;
  ulonglong in_RAX;
  undefined8 uVar4;
  ulonglong uVar5;
  
  if ((int)param_2[2] == 0) {
    if ((param_2[1] != 2) || (in_RAX = FUN_140094fbc(*param_2,2), (char)in_RAX == '\0')) {
      if (param_2[1] != 3) goto LAB_14009520c;
      lVar2 = *param_2;
      uVar5 = 0;
      do {
        uVar1 = *(ushort *)(lVar2 + uVar5 * 2);
        in_RAX = FUN_14008ec04();
        if ((0xff < uVar1) ||
           (uVar1 = *(ushort *)(in_RAX + (ulonglong)uVar1 * 2), in_RAX = (ulonglong)uVar1,
           (uVar1 >> 2 & 1) == 0)) goto LAB_14009520c;
        uVar5 = uVar5 + 1;
      } while (uVar5 < 3);
    }
    iVar3 = FUN_1400a6f60((short *)(param_1 + 0x80),0x40,*param_2,param_2[1]);
    if (iVar3 == 0) {
      uVar4 = FUN_1400a6e20((short *)(param_1 + 0x120),0x55,(short *)&DAT_14011c988,1);
      if (((int)uVar4 == 0) &&
         (uVar4 = FUN_1400a6e20((short *)(param_1 + 0x120),0x55,(short *)*param_2,param_2[1]),
         (int)uVar4 == 0)) {
        return CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
      }
    }
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
LAB_14009520c:
  return in_RAX & 0xffffffffffffff00;
}

