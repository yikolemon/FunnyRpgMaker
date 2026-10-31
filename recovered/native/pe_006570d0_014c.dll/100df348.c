/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100df348 */

undefined1 * Catch_100df348(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  undefined1 auStack_40 [60];
  
  *(undefined1 **)(unaff_EBP + -0x10) = auStack_40;
  *(undefined4 *)(unaff_EBP + -4) = 0xc;
  FUN_100e1bb3();
  uVar1 = (**(code **)(**(int **)(unaff_EBP + -0x48) + 4))();
  *(undefined4 *)(unaff_EBP + -0x4c) = uVar1;
  FUN_100b26fe("C:\\Users\\Administrator\\Downloads\\FunnyGamePlayer\\cmake\\engine\\engine_ui.cpp",
               0x5d,"EngineUIGameConfig::load",4,"GameConfig loading throws {}",0x1c,
               (undefined4 *)(unaff_EBP + -0x4c));
  return &LAB_100df187;
}

