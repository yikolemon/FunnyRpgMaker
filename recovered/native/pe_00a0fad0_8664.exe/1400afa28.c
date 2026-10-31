/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400afa28 */

bool FUN_1400afa28(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  ushort uVar2;
  longlong lVar3;
  ushort uVar4;
  
  uVar4 = *param_1;
  do {
    if (uVar4 == 0) {
      return *param_2 != 0;
    }
    uVar1 = *param_2;
    if (uVar1 == 0) {
      return true;
    }
    if ((ushort)((uVar4 & 0xff) - 0x81) < 0x1f) {
LAB_1400afa5b:
      lVar3 = 4;
      if (uVar4 != uVar1) {
        return true;
      }
    }
    else {
      if ((uVar4 & 0xff) < 0xe0) {
        uVar2 = uVar4 + 0x20;
        if (0x19 < (ushort)(uVar4 - 0x41)) {
          uVar2 = uVar4;
        }
      }
      else {
        uVar2 = uVar4;
        if ((uVar4 & 0xff) < 0xfd) goto LAB_1400afa5b;
      }
      uVar4 = uVar1 + 0x20;
      if (0x19 < (ushort)(uVar1 - 0x41)) {
        uVar4 = uVar1;
      }
      lVar3 = 2;
      if (uVar2 != uVar4) {
        return true;
      }
    }
    uVar4 = *(ushort *)((longlong)param_1 + lVar3);
    param_1 = (ushort *)((longlong)param_1 + lVar3);
    param_2 = (ushort *)((longlong)param_2 + lVar3);
  } while( true );
}

