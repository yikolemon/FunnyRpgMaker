/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100255fd */

undefined8 FUN_100255fd(int param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar5 = CONCAT44(param_3,param_2);
  iVar4 = param_4;
  if ((param_2 < 100) <= param_3) {
    do {
      iVar2 = (int)((ulonglong)uVar5 >> 0x20);
      uVar1 = (uint)uVar5;
      param_4 = iVar4 + -2;
      uVar5 = __aulldiv(uVar5,100,0);
      *(undefined2 *)(param_1 + -2 + iVar4) =
           *(undefined2 *)(&DAT_102903d0 + ((int)uVar5 * -100 + uVar1) * 2);
      iVar4 = param_4;
    } while (iVar2 != 0 || (uint)-iVar2 < (uint)(9999 < uVar1));
  }
  uVar3 = (uint)((ulonglong)uVar5 >> 0x20);
  uVar1 = (uint)((uint)uVar5 < 10);
  if (uVar3 < uVar1) {
    *(byte *)(param_1 + -1 + param_4) = (byte)uVar5 | 0x30;
    param_4 = param_4 + -1;
  }
  else {
    *(undefined2 *)(param_1 + -2 + param_4) = *(undefined2 *)(&DAT_102903d0 + (uint)uVar5 * 2);
    param_4 = param_4 + -2;
  }
  return CONCAT44(uVar3 - uVar1,param_1 + param_4);
}

