/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140001c7e */

undefined8 Catch_140001c7e(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_140004b57();
  uVar2 = (**(code **)(**(longlong **)(param_2 + 0x160) + 8))();
  *(undefined8 *)(param_2 + 200) = uVar2;
  *(undefined8 *)(param_2 + 0x48) = "AppConfig loading throws {}";
  *(undefined8 *)(param_2 + 0x50) = 0x1b;
  *(undefined8 *)(param_2 + 0x30) =
       "C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\win32_gui.cpp";
  *(undefined4 *)(param_2 + 0x38) = 0x86;
  *(char **)(param_2 + 0x40) = "AppConfig::load";
  FUN_140039daa(uVar1,(undefined8 *)(param_2 + 0x30),4,(undefined8 *)(param_2 + 0x48),
                (undefined8 *)(param_2 + 200));
  return 0x140001a3e;
}

