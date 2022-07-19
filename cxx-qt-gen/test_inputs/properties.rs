mod my_object {
    use cxx_qt_lib::QColor;

    #[derive(Default)]
    pub struct Data {
        primitive: i32,
        opaque: QColor,
        nested: crate::nested_object::CppObj,
    }

    #[derive(Default)]
    pub struct RustObj;
}
