#pragma once
class Canvas {

    // add private data members
    int nr_of_columns;
    int nr_of_lines;
    char** matrix;

public:

    Canvas(int, int);  //done

    void DrawCircle(int x, int y, int ray, char ch); //done

    void FillCircle(int x, int y, int ray, char ch); //done

    void DrawRect(int left, int top, int right, int bottom, char ch); //done

    void FillRect(int left, int top, int right, int bottom, char ch);

    void SetPoint(int x, int y, char ch); //done

    void DrawLine(int x1, int y1, int x2, int y2, char ch); 

    void Print(); // shows what was printed  done

    void Clear(); // clears the canvas ... destructor?

};
