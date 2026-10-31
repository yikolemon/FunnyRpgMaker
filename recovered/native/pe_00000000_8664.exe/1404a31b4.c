/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1404a31b4 */

void FUN_1404a31b4(undefined8 param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  
  if (DAT_140661558 != -1) {
    if (DAT_140661558 == 0) {
      lVar2 = FUN_1404a3748(0x11,L"w+bx",&DAT_140564bd8,&DAT_140564be0);
      if (lVar2 == 0) goto LAB_1404a31fe;
    }
    FUN_1404b9600(param_1);
    return;
  }
LAB_1404a31fe:
  uVar1 = FUN_1404a3398(param_1,0);
  (*(code *)s_GetTimeZoneInformation_14059e09a._6_8_)(uVar1,1);
  return;
}

